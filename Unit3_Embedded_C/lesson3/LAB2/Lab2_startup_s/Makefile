# @Authors: Eng Shehab Hassan
# @Date: 3/9/2024
# @Description: This is the makefile for the project. It is used to compile the project and run the tests.
# @Version: 1.0
# @Revisions: None
# @Dependencies: None
# $< : dependencies
# $@ : target # -gdwarf-2

CC      = arm-none-eabi-
CTARG   = -mcpu=cortex-m3 -mthumb -gdwarf-2 -std=c99 
CTARGAS = -mcpu=cortex-m3 -mthumb
INCS    = -I .
SRC	    = $(wildcard *.c)
OBJ	 	= $(SRC:.c=.o) # same as OBJS (patsubst %.c, %.o, $(SRC)
ASM  	= $(wildcard *.s)
ASMOBJ  = $(ASM:.s=.o)
LINKER  = $(wildcard *.ld)
Map_file = -Map=Map_file.map
project_name = LAB2_TOGGLE_LED
file_format = ihex #binary 

all: $(project_name).hex
	@echo "============== Building is done =============="
%.o: %.s
	@$(CC)as.exe  $(CTARGAS) $< -o $@
	@echo "============== Asmbely file DONE =============="
%.o: %.c
	@$(CC)gcc.exe -c $(CTARG) $(INCS) $< -o $@
	@echo "============== Object file DONE =============="
$(project_name).elf: $(OBJ) $(ASMOBJ)
	@$(CC)ld.exe -T $(LINKER) $(OBJ) $(ASMOBJ) -o $@ $(Map_file) 
	@echo "==============file .elf DONE =============="
$(project_name).hex: $(project_name).elf
	@$(CC)objcopy.exe -O $(file_format) $< $@
	@echo "============== Binary file DONE =============="

mem_sec_startup:
	@echo "============== Display The Section Of Memory : =============="
	@$(CC)objdump.exe -h startup.o
mem_sec_main:
	@echo "============== Display The Section Of Memory : =============="
	@$(CC)objdump.exe -h main.o	
sec_elf:
	@echo "============== section of elf file =============="
	@$(CC)objdump.exe $(project_name).elf -h
file_log:
	@echo "============== log file =============="
	@$(CC)objdump.exe -D main.o	> log.txt
sec_nm_elf:
	@echo "============== section of elf file =============="
	@$(CC)nm.exe $(project_name).elf 
clean:
	@rm -rf *.o *~ *.elf *.hex *.map *.bin *.txt
	@echo "============== Remove all files =============="
# app.o:app.c
# 	@$(CC)gcc.exe -c -g -I . -mcpu=arm926ej-s  app.c -o app.o
# UART.o:UART.c	
# 	@$(CC)gcc.exe -c -g -I . -mcpu=arm926ej-s  UART.c -o UART.o 
# startup.o:startup.s	
# 	@$(CC)as.exe  -mcpu=arm926ej-s -g startup.s -o startup.o
# learn_in_depth.elf:	app.o UART.o startup.o
# 	@$(CC)ld.exe -T linker_script.ld  app.o UART.o startup.o -o learn_in_depth.elf
# learn_in_depth.bin: learn_in_depth.elf
# 	@$(CC)objcopy.exe -O binary learn_in_depth.elf  learn_in_depth.bin

