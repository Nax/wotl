#!/usr/bin/env ruby

$: << File.expand_path(File.dirname(__FILE__) + '/../lib')

require 'decomp'

data = File.binread('input/BOOT.BIN')
data_new = data.dup

elf = Elf.new
elf.load_file(File.open('build/boot.elf', 'rb'))

SECTIONS.each do |section|
  elf_section = elf.sections[section.name]
  unless elf_section
    puts "Unknown section: #{section.name}"
    exit 1
  end

  unless elf_section.data.size == section.size
    puts "Section size mismatch: #{section.name}, expected #{section.size.to_s(16)}, got #{elf_section.data.size.to_s(16)}"
    exit 1
  end

  data_new[section.paddr, section.size] = elf_section.data
end

File.binwrite('out/BOOT.BIN', data_new)
