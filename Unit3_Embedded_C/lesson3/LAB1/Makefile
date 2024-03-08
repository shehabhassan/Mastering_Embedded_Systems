# @Authors: Eng Shehab Hassan
# @Date: 2/29/2024
# @Description: This is the makefile for the project. It is used to compile the project and run the tests.
# @Version: 1.0
# @Revisions: None
# @Dependencies: None
# $< : dependencies
# $@ : target
CC = arm-none-eabi-
CTARG = -mcpu=arm926ej-s
INCS = -I .

all: learn_in_depth.bin
	@echo "Compilation is done"
app.o:app.c
	@$(CC)gcc.exe -c -g -I . -mcpu=arm926ej-s app.c -o app.o
UART.o:UART.c	
	@$(CC)gcc.exe -c -g -I . -mcpu=arm926ej-s  UART.c -o UART.o 
startup.o:startup.s	
	@$(CC)as.exe  -mcpu=arm926ej-s -g startup.s -o startup.o
learn_in_depth.elf:	app.o UART.o startup.o
	@$(CC)ld.exe -T linker_script.ld  app.o UART.o startup.o -o learn_in_depth.elf
learn_in_depth.bin: learn_in_depth.elf
	@$(CC)objcopy.exe -O binary learn_in_depth.elf  learn_in_depth.bin
clean:
	rm -rf *.o *.bin *~

message:
	@echo "Hello every one"