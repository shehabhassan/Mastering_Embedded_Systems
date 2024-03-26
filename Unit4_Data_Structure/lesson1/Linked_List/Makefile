# Run program 
# compile and run
.PHONY: linkedList
#include path to linkedList
CC      = gcc
CPPFAGS = -Wall -O0 -g 
SOURCE  = $(wildcard *.c) 
TARGET = linkedList.exe   

linkedList:clean 
	$(CC) $(CPPFAGS) $(SOURCE) -o $(TARGET)  

run: 
	./linkedList.exe

clean:
	rm -f $(TARGET)


