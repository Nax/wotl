#!/usr/bin/env ruby

$: << File.expand_path(File.dirname(__FILE__) + '/../lib')

require 'decomp'
require 'digest'
require 'yaml'

TARGET = "ae0319c5c31885930d76a5c7dc1d389cd664365c48205ed887f002e01ed4abc4"

data = File.binread('out/BOOT.BIN')
d = Digest::SHA256.hexdigest(data)
puts "out/BOOT.BIN: #{d}"

if d != TARGET
  puts "Checksum mismatch!"
  exit 1
end

# Print stats
meta = YAML.load_file('meta.yml')
puts "\nStats:"
['.text'].each do |section|
  section_def = SECTIONS.find { |s| s.name == section }
  total = section_def.size
  disasm = 0
  meta['files'].each do |_k, v|
    data = v[section]
    next unless data
    disasm += data[1] - data[0]
  end
  puts "  #{section}: %01.2f%% (0x%x / 0x%x)" % [(disasm.to_f / total * 100).round(2), disasm, total]
end

