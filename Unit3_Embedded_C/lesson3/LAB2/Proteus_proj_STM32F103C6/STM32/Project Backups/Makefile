# @Authors: Eng Shehab Hassan
# @Date: 2/29/2024
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
libs	= 
SRC	    = $(wildcard *.c)
OBJ	 	= $(SRC:.c=.o) # same as OBJS (patsubst %.c, %.o, $(SRC)
ASM  	= $(wildcard *.s)
ASMOBJ  = $(ASM:.s=.o)
project_name = LAB1_TOGGLE
all: $(project_name).hex
	@echo "==================="
	@echo "Building is done"
	@echo "==================="
%.o: %.s
	@$(CC)as.exe  $(CTARGAS) $< -o $@
	@echo "==================="
	@echo "Asmbely file DONE"
	@echo "==================="
%.o: %.c
	@$(CC)gcc.exe -c $(CTARG) $(INCS) $< -o $@
	@echo "==================="
	@echo "Object file DONE "
	@echo "==================="
mem_section_startup:
	@echo "==================="
	@echo "Display The Section Of Memory :"
	@echo "==================="
	@$(CC)objdump.exe -h startup.o
mem_section_main:
	@echo "==================="
	@echo "Display The Section Of Memory :"
	@echo "==================="
	@$(CC)objdump.exe -h main.o	
section_elf:
	@echo "==================="
	@echo "section of elf file"
	@echo "==================="
	@$(CC)objdump.exe $(project_name).elf -h
$(project_name).elf: $(OBJ) $(ASMOBJ)
	@$(CC)ld.exe -T linker_script.ld  $(OBJ) $(ASMOBJ) -o $@ -Map=Map_file.map
	@echo "==================="
	@echo "file .elf DONE "
	@echo "==================="
$(project_name).hex: $(project_name).elf
	@$(CC)objcopy.exe -O binary $<  $@
	@echo "==================="
	@echo "Binary file DONE "
	@echo "==================="
clean:
	@rm -rf *.o *~ *.elf *.hex *.map *.bin
	@echo "Remove all files"

# app.o:app.c
# 	@$(CC)gcc.exe -c -g -I . -mcpu=arm926ej-s app.c -o app.o
# UART.o:UART.c	
# 	@$(CC)gcc.exe -c -g -I . -mcpu=arm926ej-s  UART.c -o UART.o 
# startup.o:startup.s	
# 	@$(CC)as.exe  -mcpu=arm926ej-s -g startup.s -o startup.o
# learn_in_depth.elf:	app.o UART.o startup.o
# 	@$(CC)ld.exe -T linker_script.ld  app.o UART.o startup.o -o learn_in_depth.elf
# learn_in_depth.bin: learn_in_depth.elf
# 	@$(CC)objcopy.exe -O binary learn_in_depth.elf  learn_in_depth.bin
