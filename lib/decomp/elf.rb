class ElfHeader
  attr_accessor :e_ident
  attr_accessor :e_type
  attr_accessor :e_machine
  attr_accessor :e_version
  attr_accessor :e_entry
  attr_accessor :e_phoff
  attr_accessor :e_shoff
  attr_accessor :e_flags
  attr_accessor :e_ehsize
  attr_accessor :e_phentsize
  attr_accessor :e_phnum
  attr_accessor :e_shentsize
  attr_accessor :e_shnum
  attr_accessor :e_shstrndx

  def initialize
    @e_ident = "\x00" * 0x10
    @e_type = 0
    @e_machine = 0
    @e_version = 0
    @e_entry = 0
    @e_phoff = 0
    @e_shoff = 0
    @e_flags = 0
    @e_ehsize = 0
    @e_phentsize = 0
    @e_phnum = 0
    @e_shentsize = 0
    @e_shnum = 0
    @e_shstrndx = 0
  end

  def load_bin(data)
    @e_ident = data[0, 0x10]
    @e_type = data[0x10, 2].unpack('S<').first
    @e_machine = data[0x12, 2].unpack('S<').first
    @e_version = data[0x14, 4].unpack('L<').first
    @e_entry = data[0x18, 4].unpack('L<').first
    @e_phoff = data[0x1C, 4].unpack('L<').first
    @e_shoff = data[0x20, 4].unpack('L<').first
    @e_flags = data[0x24, 4].unpack('L<').first
    @e_ehsize = data[0x28, 2].unpack('S<').first
    @e_phentsize = data[0x2a, 2].unpack('S<').first
    @e_phnum = data[0x2c, 2].unpack('S<').first
    @e_shentsize = data[0x2e, 2].unpack('S<').first
    @e_shnum = data[0x30, 2].unpack('S<').first
    @e_shstrndx = data[0x32, 2].unpack('S<').first
  end

  def load_file(f)
    load_bin(f.read(0x34))
  end

  def serialize
    [
      @e_ident,
      @e_type,
      @e_machine,
      @e_version,
      @e_entry,
      @e_phoff,
      @e_shoff,
      @e_flags,
      @e_ehsize,
      @e_phentsize,
      @e_phnum,
      @e_shentsize,
      @e_shnum,
      @e_shstrndx
    ].pack('a16S<S<L<L<L<L<L<S<S<S<S<S<S<')
  end
end

class ElfSectionHeader
  attr_accessor :sh_name
  attr_accessor :sh_type
  attr_accessor :sh_flags
  attr_accessor :sh_addr
  attr_accessor :sh_offset
  attr_accessor :sh_size
  attr_accessor :sh_link
  attr_accessor :sh_info
  attr_accessor :sh_addralign
  attr_accessor :sh_entsize

  def initialize
    @sh_name = 0
    @sh_type = 0
    @sh_flags = 0
    @sh_addr = 0
    @sh_offset = 0
    @sh_size = 0
    @sh_link = 0
    @sh_info = 0
    @sh_addralign = 0
    @sh_entsize = 0
  end

  def load_bin(data)
    @sh_name = data[0, 4].unpack('L<').first
    @sh_type = data[4, 4].unpack('L<').first
    @sh_flags = data[8, 4].unpack('L<').first
    @sh_addr = data[0xc, 4].unpack('L<').first
    @sh_offset = data[0x10, 4].unpack('L<').first
    @sh_size = data[0x14, 4].unpack('L<').first
    @sh_link = data[0x18, 4].unpack('L<').first
    @sh_info = data[0x1c, 4].unpack('L<').first
    @sh_addralign = data[0x20, 4].unpack('L<').first
    @sh_entsize = data[0x24, 4].unpack('L<').first
  end

  def load_file(f)
    load_bin(f.read(0x28))
  end

  def serialize
    [
      @sh_name,
      @sh_type,
      @sh_flags,
      @sh_addr,
      @sh_offset,
      @sh_size,
      @sh_link,
      @sh_info,
      @sh_addralign,
      @sh_entsize
    ].pack('L<L<L<L<L<L<L<L<L<L<')
  end
end

class ElfProgramHeader
  attr_accessor :p_type
  attr_accessor :p_offset
  attr_accessor :p_vaddr
  attr_accessor :p_paddr
  attr_accessor :p_filesz
  attr_accessor :p_memsz
  attr_accessor :p_flags
  attr_accessor :p_align

  def initialize
    @p_type = 0
    @p_offset = 0
    @p_vaddr = 0
    @p_paddr = 0
    @p_filesz = 0
    @p_memsz = 0
    @p_flags = 0
    @p_align = 0
  end

  def load_bin(data)
    @p_type = data[0, 4].unpack('L<').first
    @p_offset = data[4, 4].unpack('L<').first
    @p_vaddr = data[8, 4].unpack('L<').first
    @p_paddr = data[0xc, 4].unpack('L<').first
    @p_filesz = data[0x10, 4].unpack('L<').first
    @p_memsz = data[0x14, 4].unpack('L<').first
    @p_flags = data[0x18, 4].unpack('L<').first
    @p_align = data[0x1c, 4].unpack('L<').first
  end
end

class ElfSectionHeader
  attr_accessor :sh_name
  attr_accessor :sh_type
  attr_accessor :sh_flags
  attr_accessor :sh_addr
  attr_accessor :sh_offset
  attr_accessor :sh_size
  attr_accessor :sh_link
  attr_accessor :sh_info
  attr_accessor :sh_addralign
  attr_accessor :sh_entsize

  def initialize
    @sh_name = 0
    @sh_type = 0
    @sh_flags = 0
    @sh_addr = 0
    @sh_offset = 0
    @sh_size = 0
    @sh_link = 0
    @sh_info = 0
    @sh_addralign = 0
    @sh_entsize = 0
  end

  def load_bin(data)
    @sh_name = data[0, 4].unpack('L<').first
    @sh_type = data[4, 4].unpack('L<').first
    @sh_flags = data[8, 4].unpack('L<').first
    @sh_addr = data[0xc, 4].unpack('L<').first
    @sh_offset = data[0x10, 4].unpack('L<').first
    @sh_size = data[0x14, 4].unpack('L<').first
    @sh_link = data[0x18, 4].unpack('L<').first
    @sh_info = data[0x1c, 4].unpack('L<').first
    @sh_addralign = data[0x20, 4].unpack('L<').first
    @sh_entsize = data[0x24, 4].unpack('L<').first
  end
end

class ElfSection
  attr_reader :name
  attr_reader :data

  def initialize(name, data)
    @name = name
    @data = data
  end
end

class Elf
  attr_reader :sections

  def initialize
    @sections = {}
  end

  def load_file(file)
    header = ElfHeader.new
    header.load_file(file)

    # Load the string table
    file.seek(header.e_shoff + header.e_shstrndx * header.e_shentsize)
    sh = ElfSectionHeader.new
    sh.load_file(file)
    file.seek(sh.sh_offset)
    shstrtab = file.read(sh.sh_size)

    file.seek(header.e_shoff)
    header.e_shnum.times do |i|
      file.seek(header.e_shoff + i * header.e_shentsize)
      sh = ElfSectionHeader.new
      sh.load_file(file)

      name = shstrtab[sh.sh_name..-1].split("\x00").first
      file.seek(sh.sh_offset)
      data = file.read(sh.sh_size)
      section = ElfSection.new(name, data)
      @sections[name] = section
    end
  end
end
