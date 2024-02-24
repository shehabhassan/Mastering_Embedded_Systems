# LAB TWO 
Create a baremetal Software to send a “learn-in-depth:<your_Name>” using UART on ARM926EJ-S core.

<p align="center">
  <img src = "IMAGE/ARM926EJ-S core..jpg" alt="Image Description" width = "150" hight = "150"  >
</p>

<h3 align="center">
 VersatilePBphysical Board  
</h3>

## SETUP QEMU Simulator and ARM Tool Chain
1. [GEMU Installer](#https://qemu.weilnetz.de/w32/qemu-w32-setup-20180430.exe)
2. [ARM Cross Toolchain](#https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads)
## Compile APP file on Target  

To Generate object file  app.c , UART.c , startup.s run the following command

```bash
  arm-none-eabi-gcc.exe -c -g -I . -mcpu=arm926ej-s app.c -o app.o
  arm-none-eabi-gcc.exe -c -g -I . -mcpu=arm926ej-s UART.c -o UART.o 
  arm-none-eabi-as.exe -mcpu=arm926ej-s -g startup.s -o startup.o
```
To List all object files in the same Dirctory.
```bash
 ls *.o
```
## Navigate: sections
```bash
  arm-none-eabi-objdump.exe -h app.o
```
## Display the full content of all sections requested
```bash
  arm-none-eabi-objdump.exe -s app.o
```
## Link all the objects and Generate Map File.
```bash
  arm-none-eabi-ld.exe -T linker_script.ld  startup.o UART.o app.o -o learn_in_depth.elf  
  arm-none-eabi-ld.exe -T linker_script.ld  startup.o UART.o app.o -o learn_in_depth.elf -Map=Map_file.map
```
## Analyze the executable file
```bash
  arm-none-eabi-nm.exe  learn_in_depth.elf
  arm-none-eabi-objdump.exe  -h learn_in_depth.elf
```
## Generate Binary file
```bash
  arm-none-eabi-objcopy.exe -o binary learn_in_depth.elf learn_in_depth.bin
```
## To run the program in the QEMU Simulator
```bash
  ../qemu/qemu-system-arm.exe -M versatilepb-m 128M-nographic-kernel learn_in_depth.bin
```
 
 <!-- #### Get all items

```http
  GET /api/items
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `api_key` | `string` | **Required**. Your API key |
 -->