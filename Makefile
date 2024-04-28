SCRIPT_DIR  	:= scripts
SCRIPT_EXTRACT 	:= $(SCRIPT_DIR)/extract.rb

BUILD_DIR 		:= build
TARGET_ELF		:= $(BUILD_DIR)/boot.elf
LD_SCRIPT   	:= $(BUILD_DIR)/link.ld
LD_SCRIPT_IN   	:= link.ld.in
META_FILE   	:= meta.yml
CC          	:= mwccpsp.exe
LD          	:= mips-linux-gnu-ld
CFLAGS      	:= -O4
SRC         	:= $(wildcard src/*.c)
OBJ		 		:= $(SRC:%=$(BUILD_DIR)/obj/%.o)

.PHONY: all
all: check

.PHONY: always-remake

.PHONY: check
check: $(TARGET_ELF) always-remake

$(TARGET_ELF): $(OBJ) $(LD_SCRIPT)
	$(LD) -EL -T $(LD_SCRIPT)

$(LD_SCRIPT): $(SCRIPT_EXTRACT) $(LD_SCRIPT_IN) $(META_FILE)
	ruby $(SCRIPT_EXTRACT)

$(BUILD_DIR)/obj/%.c.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
