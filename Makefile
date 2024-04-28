BUILD_DIR 		:= build
SCRIPT_DIR  	:= scripts
OUT_DIR	 		:= out

SCRIPT_EXTRACT 	:= $(SCRIPT_DIR)/extract.rb
SCRIPT_INJECT 	:= $(SCRIPT_DIR)/inject.rb
SCRIPT_CHECK 	:= $(SCRIPT_DIR)/check.rb

TARGET		    := $(OUT_DIR)/BOOT.BIN
TARGET_ELF		:= $(BUILD_DIR)/boot.elf
LD_SCRIPT   	:= $(BUILD_DIR)/link.ld
LD_SCRIPT_IN   	:= link.ld.in
META_FILE   	:= meta.yml
CC          	:= mwccpsp.exe
LD          	:= mips-linux-gnu-ld
CFLAGS      	:= -W all -O4 -nostdinc -gccinc -gccdep -Iinclude -MD
SRC         	:= $(wildcard src/*.c)
OBJ		 		:= $(SRC:%=$(BUILD_DIR)/obj/%.o)
DEP		 		:= $(OBJ:.o=.d)

.PHONY: all
all: check

include $(DEP)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)

.PHONY: mrproper
mrproper: clean
	rm -rf $(TARGET)

.PHONY: re
re: mrproper all

.PHONY: always-remake

.PHONY: check
check: $(TARGET) $(SCRIPT_CHECK) always-remake
	ruby $(SCRIPT_CHECK)

$(TARGET): $(TARGET_ELF) $(SCRIPT_INJECT)
	ruby $(SCRIPT_INJECT)

$(TARGET_ELF): $(OBJ) $(LD_SCRIPT)
	$(LD) -EL -T $(LD_SCRIPT)

$(LD_SCRIPT): $(SCRIPT_EXTRACT) $(LD_SCRIPT_IN) $(META_FILE)
	ruby $(SCRIPT_EXTRACT)

$(BUILD_DIR)/obj/%.c.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
