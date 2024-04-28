#!/usr/bin/env ruby

$: << File.expand_path(File.dirname(__FILE__) + '/../lib')

require 'yaml'
require 'elf'

SECTIONS = %w[
  .text
  .sceStub.text
  .lib.ent.top
  .lib.ent
  .lib.ent.btm
  .lib.stub.top
  .lib.stub
  .lib.stub.btm
  .rodata.sceModuleInfo
  .rodata.sceResident
  .rodata.sceNid
  .rodata.sceVstub
  .data
  .bss
]

elf = Elf.new
file = File.open('input/BOOT.BIN', 'rb')
elf.load_file(file)

p elf

#SECTIONS.each do |section|
  # Find where the section header is
  #e_shoff = BOOT_BIN[0x20, 4].unpack('L<').first
  #p e_shoff.to_s(16)
#end
