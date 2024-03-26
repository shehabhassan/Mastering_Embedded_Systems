# @Authors: Eng Shehab Hassan
# @Date: 2/29/2024
# @Description: This is the makefile for the project. It is used to compile the project and run the tests.
# @Version: 1.0
# @Revisions: None
# @Dependencies: None
# $< : dependencies
# $@ : target # -gdwarf-2

CC      = arm-none-eabi-
CTARG   = -mcpu=cortex-m4 -mthumb -gdwarf-2 -g -std=c99 
CTARGAS = -mcpu=cortex-m4  
INCS    = -I .
libs	= 
SRC	= $(wildcard *.c)
OBJ	= $(SRC:.c=.o) # same as OBJS (patsubst %.c, %.o, $(SRC)
ASM  	= $(wildcard *.s)
LINKER  = $(wildcard *.ld)
ASMOBJ  = $(ASM:.s=.o)
exe_file = ihex #binary
project_name = LAB3_Cortex_M4
all: $(project_name).hex
	@echo "=========== Building is done ==========="
%.o: %.s
	@$(CC)as.exe  $(CTARGAS) $< -o $@
	@echo "=========== Asmbely file DONE ==========="
%.o: %.c
	@$(CC)gcc.exe -c $(CTARG) $(INCS) $< -o $@
	@echo "=========== Object file DONE ==========="
mem_section_startup:
	@echo "=========== Display The Section Of Memory : ==========="
	@$(CC)objdump.exe -h startup.o
mem_section_main:
	@echo "=========== Display The Section Of Memory : ==========="
	@$(CC)objdump.exe -h main.o	
section_elf:
	@echo "=========== section of elf file ==========="
	@$(CC)objdump.exe $(project_name).elf -h
file_log:
	@echo "=========== section of elf file ==========="
	@$(CC)objdump.exe -D main.o	> log.txt
sec_nm_elf:
	@echo "=========== section of elf file ==========="
	@$(CC)nm.exe $(project_name).elf


$(project_name).elf: $(OBJ) $(ASMOBJ)
	@$(CC)ld.exe -T $(LINKER)  $(OBJ) $(ASMOBJ) -o $@ -Map=Map_file.map
	@echo "=========== file .elf DONE ==========="
	@ cp $(project_name).elf $(project_name).axf
$(project_name).hex: $(project_name).elf
	@$(CC)objcopy.exe -O $(exe_file) $<  $@
	@echo "=========== Binary file DONE ==========="
clean:
	@rm -rf *.o *~ *.elf *.hex *.map *.bin *.txt *.axf
	@echo "Remove all files"


