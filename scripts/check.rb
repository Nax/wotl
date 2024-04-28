#!/usr/bin/env ruby

$: << File.expand_path(File.dirname(__FILE__) + '/../lib')

require 'digest'

TARGET = "ae0319c5c31885930d76a5c7dc1d389cd664365c48205ed887f002e01ed4abc4"

data = File.binread('out/BOOT.BIN')
d = Digest::SHA256.hexdigest(data)
puts "out/BOOT.BIN: #{d}"

if d != TARGET
  puts "Checksum mismatch!"
  exit 1
end
