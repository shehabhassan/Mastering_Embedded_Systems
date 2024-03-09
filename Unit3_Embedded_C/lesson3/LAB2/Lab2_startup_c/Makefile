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
SRC	    = $(wildcard *.c)
OBJ	 	= $(SRC:.c=.o) # same as OBJS (patsubst %.c, %.o, $(SRC)
ASM  	= $(wildcard *.s)
ASMOBJ  = $(ASM:.s=.o)
LINKER  = $(wildcard *.ld)
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
	@$(CC)ld.exe -T $(LINKER)  $(OBJ) $(ASMOBJ) -o $@ -Map=Map_file.map
	@echo "==============file .elf DONE =============="
$(project_name).hex: $(project_name).elf
	@$(CC)objcopy.exe -O $(file_format) $<  $@
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

################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# -include ../makefile.init

# RM := rm -rf

# # All of the sources participating in the build are defined here
# -include sources.mk
# -include Startup/subdir.mk
# -include Src/subdir.mk
# -include objects.mk

# ifneq ($(MAKECMDGOALS),clean)
# ifneq ($(strip $(S_DEPS)),)
# -include $(S_DEPS)
# endif
# ifneq ($(strip $(S_UPPER_DEPS)),)
# -include $(S_UPPER_DEPS)
# endif
# ifneq ($(strip $(C_DEPS)),)
# -include $(C_DEPS)
# endif
# endif

# -include ../makefile.defs

# OPTIONAL_TOOL_DEPS := \
# $(wildcard ../makefile.defs) \
# $(wildcard ../makefile.init) \
# $(wildcard ../makefile.targets) \


# BUILD_ARTIFACT_NAME := LAB_ONE
# BUILD_ARTIFACT_EXTENSION := elf
# BUILD_ARTIFACT_PREFIX :=
# BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# # Add inputs and outputs from these tool invocations to the build variables 
# EXECUTABLES += \
# LAB_ONE.elf \

# MAP_FILES += \
# LAB_ONE.map \

# SIZE_OUTPUT += \
# default.size.stdout \

# OBJDUMP_LIST += \
# LAB_ONE.list \

# OBJCOPY_HEX += \
# LAB_ONE.hex \

# OBJCOPY_BIN += \
# LAB_ONE.bin \


# # All Target
# all: main-build

# # Main-build Target
# main-build: LAB_ONE.elf secondary-outputs

# # Tool invocations
# LAB_ONE.elf LAB_ONE.map: $(OBJS) $(USER_OBJS) E:\NT1_automotive\Master_Embedded_System\Unit3_Embedded_C\Lesson1\LAB_ONE\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
# 	arm-none-eabi-gcc -o "LAB_ONE.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"E:\NT1_automotive\Master_Embedded_System\Unit3_Embedded_C\Lesson1\LAB_ONE\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="LAB_ONE.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
# 	@echo 'Finished building target: $@'
# 	@echo ' '

# default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
# 	arm-none-eabi-size  $(EXECUTABLES)
# 	@echo 'Finished building: $@'
# 	@echo ' '

# LAB_ONE.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
# 	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "LAB_ONE.list"
# 	@echo 'Finished building: $@'
# 	@echo ' '

# LAB_ONE.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
# 	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "LAB_ONE.hex"
# 	@echo 'Finished building: $@'
# 	@echo ' '

# LAB_ONE.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
# 	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "LAB_ONE.bin"
# 	@echo 'Finished building: $@'
# 	@echo ' '

# # Other Targets
# clean:
# 	-$(RM) LAB_ONE.bin LAB_ONE.elf LAB_ONE.hex LAB_ONE.list LAB_ONE.map default.size.stdout
# 	-@echo ' '

# secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

# fail-specified-linker-script-missing:
# 	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
# 	@exit 2

# warn-no-linker-script-specified:
# 	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

# .PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

# -include ../makefile.targets

