#!/usr/bin/env ruby

$: << File.expand_path(File.dirname(__FILE__) + '/../lib')

require 'yaml'
require 'fileutils'
require 'elf'

SectionDef = Struct.new(:name, :vaddr, :paddr, :size)

SECTIONS = [
  SectionDef.new('.text',         0x08804000, 0x000054, 0x246f14),
  SectionDef.new('.sceStub.text', 0x08a4af14, 0x246f68, 0x0005d8),
  SectionDef.new('.lib.ent.top',  0x08a4b4ec, 0x247540, 0x000004),
  SectionDef.new('.lib.ent',      0x08a4b4f0, 0x247544, 0x000030),
  SectionDef.new('.lib.ent.btm',  0x08a4b520, 0x247574, 0x000004),
]

DATA = File.binread('input/BOOT.BIN')

$gen_count = 0

def emit_object(section, vstart, size)
  section_def = SECTIONS.find { |s| s.name == section }
  raise "Unknown section: #{section}" unless section_def
  voffset = vstart - section_def.vaddr
  paddr = section_def.paddr + voffset
  data = DATA[paddr, size]
  elf_buffer = "\x00" * (0x3000 + size)
  elf_buffer[0x3000, size] = data
  header = ElfHeader.new
  sh_headers = [
    ElfSectionHeader.new, # NONE
    ElfSectionHeader.new, # Given section
    ElfSectionHeader.new, # .shstrtab
  ]

  # Build shstrtab
  shstrtab_data = "\x00"
  sh_headers[1].sh_name = shstrtab_data.size
  shstrtab_data << section + "\x00"
  sh_headers[2].sh_name = shstrtab_data.size
  shstrtab_data << ".shstrtab\x00"
  elf_buffer[0x2000, shstrtab_data.size] = shstrtab_data
  p shstrtab_data
  p sh_headers[1].sh_name
  p sh_headers[2].sh_name

  # Build shstrtab section
  s = sh_headers[2]
  s.sh_type = 3
  s.sh_flags = 0x20
  s.sh_offset = 0x2000
  s.sh_size = shstrtab_data.size

  # Build section
  s = sh_headers[1]
  s.sh_type = 1
  s.sh_flags = 0x06
  s.sh_addr = vstart
  s.sh_offset = 0x3000
  s.sh_size = size
  s.sh_addralign = 4

  # Build ELF header
  header.e_ident = "\x7fELF\x01\x01\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
  header.e_type = 1
  header.e_machine = 0x08
  header.e_version = 1
  header.e_entry = 0
  header.e_phoff = 0
  header.e_shoff = 0x1000
  header.e_flags = 0
  header.e_ehsize = 52
  header.e_phentsize = 0
  header.e_phnum = 0
  header.e_shentsize = 0x28
  header.e_shnum = sh_headers.size
  header.e_shstrndx = 2

  # Write ELF
  elf_header_data = header.serialize
  elf_buffer[0, elf_header_data.size] = elf_header_data
  sh_headers.each_with_index do |sh, i|
    d = sh.serialize
    elf_buffer[0x1000 + i * 0x28, d.size] = d
  end

  FileUtils.mkpath("build/obj/split/")
  File.binwrite("build/obj/split/file#{$gen_count}.o", elf_buffer)
end

emit_object('.text', 0x08804000, 0x246f14)
