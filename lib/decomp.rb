require 'yaml'
require 'fileutils'
require 'decomp/elf'

SectionDef = Struct.new(:name, :vaddr, :paddr, :size)

SECTIONS = [
  SectionDef.new('.text',         0x08804000, 0x000054, 0x246f14),
  #SectionDef.new('.sceStub.text', 0x08a4af14, 0x246f68, 0x0005d8),
  #SectionDef.new('.lib.ent.top',  0x08a4b4ec, 0x247540, 0x000004),
  #SectionDef.new('.lib.ent',      0x08a4b4f0, 0x247544, 0x000030),
  #SectionDef.new('.lib.ent.btm',  0x08a4b520, 0x247574, 0x000004),
  SectionDef.new('.data',         0x08a4c11c, 0x248170, 0x15fe14),
]
