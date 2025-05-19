#!/usr/bin/env ruby

$: << File.expand_path(File.dirname(__FILE__) + '/../lib')

require 'decomp'

ADDR = ARGV[0].to_i(16)
FORMAT = ARGV[1]
COUNT = ARGV[2].to_i

file_offset = nil
SECTIONS.each do |section|
  if section.vaddr <= ADDR && ADDR < section.vaddr + section.size
    file_offset = section.paddr + (ADDR - section.vaddr)
    break
  end
end

if file_offset.nil?
  puts "Address not found in any section"
  exit 1
end

data = nil
block_size = 0
format_elements = []
FORMAT.chars.each do |c|
  size = nil
  case c
  when 'c', 'C'
    size = 1
    format_elements << c
  when 's', 'S'
    size = 2
    format_elements << c
    format_elements << '<'
  when 'l', 'L'
    size = 4
    format_elements << c
    format_elements << '<'
  else
    puts "Invalid format: #{c}"
    exit 1
  end
  block_size += size
end
format = format_elements.join('')

File.open('input/BOOT.BIN', 'rb') do |f|
  f.seek(file_offset)
  data = f.read(block_size * COUNT)
end

if data.nil?
  puts "Failed to read data"
  exit 1
end

if data.size != block_size * COUNT
  puts "Data size mismatch: expected #{block_size * COUNT}, got #{data.size}"
  exit 1
end

COUNT.times do |i|
  offset = i * block_size
  values = data[offset, block_size].unpack(format)
  puts "    { #{values.map(&:to_s).join(', ')} },"
end
