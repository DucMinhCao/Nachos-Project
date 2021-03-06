# use normal make for this Makefile
#
# Makefile for building user programs to run on top of Nachos
#
# Several things to be aware of:
#
#    Nachos assumes that the location of the program startup routine (the
# 	location the kernel jumps to when the program initially starts up)
#       is at location 0.  This means: start.o must be the first .o passed 
# 	to ld, in order for the routine "Start" to be loaded at location 0
#

# if you are cross-compiling, you need to point to the right executables
# and change the flags to ld and the build procedure for as

GCCDIR = ../../../gnu-decstation-ultrix/decstation-ultrix/2.95.3/

LDFLAGS = -T script -N
ASFLAGS = -mips2
CPPFLAGS = $(INCDIR)

# if you aren't cross-compiling:
# GCCDIR =
# LDFLAGS = -N -T 0
# ASFLAGS =
# CPPFLAGS = -P $(INCDIR)

PATH = $(GCCDIR):/lib:/usr/bin:/bin

CC = $(GCCDIR)gcc -B../../../gnu-decstation-ultrix/
AS = $(GCCDIR)as
LD = $(GCCDIR)ld

CPP = gcc -E
INCDIR =-I../userprog -I../threads
CFLAGS = -G 0 -c $(INCDIR)

all: halt shell matmult sort add readint printint printchar readchar readstring printstring text mysort help taofile mofile echo cat copy reverse append kiemtra

start.o: start.s ../userprog/syscall.h
	$(CPP) $(CPPFLAGS) start.c > strt.s
	$(AS) $(ASFLAGS) -o start.o strt.s
	rm strt.s

halt.o: halt.c
	$(CC) $(CFLAGS) -c halt.c
halt: halt.o start.o
	$(LD) $(LDFLAGS) start.o halt.o -o halt.coff
	../bin/coff2noff halt.coff halt

shell.o: shell.c
	$(CC) $(CFLAGS) -c shell.c
shell: shell.o start.o
	$(LD) $(LDFLAGS) start.o shell.o -o shell.coff
	../bin/coff2noff shell.coff shell

sort.o: sort.c
	$(CC) $(CFLAGS) -c sort.c
sort: sort.o start.o
	$(LD) $(LDFLAGS) start.o sort.o -o sort.coff
	../bin/coff2noff sort.coff sort

matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c
matmult: matmult.o start.o
	$(LD) $(LDFLAGS) start.o matmult.o -o matmult.coff
	../bin/coff2noff matmult.coff matmult

add.o: add.c
	$(CC) $(CFLAGS) -c add.c
add: add.o add.o
	$(LD) $(LDFLAGS) start.o add.o -o add.coff
	../bin/coff2noff add.coff add

readint.o: readint.c
	$(CC) $(CFLAGS) -c readint.c
readint: readint.o readint.o
	$(LD) $(LDFLAGS) start.o readint.o -o readint.coff
	../bin/coff2noff readint.coff readint

printint.o: printint.c
	$(CC) $(CFLAGS) -c printint.c
printint: printint.o printint.o
	$(LD) $(LDFLAGS) start.o printint.o -o printint.coff
	../bin/coff2noff printint.coff printint

printchar.o: printchar.c
	$(CC) $(CFLAGS) -c printchar.c
printchar: printchar.o printchar.o
	$(LD) $(LDFLAGS) start.o printchar.o -o printchar.coff
	../bin/coff2noff printchar.coff printchar

readchar.o: readchar.c
	$(CC) $(CFLAGS) -c readchar.c
readchar: readchar.o readchar.o
	$(LD) $(LDFLAGS) start.o readchar.o -o readchar.coff
	../bin/coff2noff readchar.coff readchar

readstring.o: readstring.c
	$(CC) $(CFLAGS) -c readstring.c
readstring: readstring.o readstring.o
	$(LD) $(LDFLAGS) start.o readstring.o -o readstring.coff
	../bin/coff2noff readstring.coff readstring

printstring.o: printstring.c
	$(CC) $(CFLAGS) -c printstring.c
printstring: readstring.o printstring.o
	$(LD) $(LDFLAGS) start.o printstring.o -o printstring.coff
	../bin/coff2noff printstring.coff printstring

help.o: help.c
	$(CC) $(CFLAGS) -c help.c
help: help.o help.o
	$(LD) $(LDFLAGS) start.o help.o -o help.coff
	../bin/coff2noff help.coff help

text.o: text.c
	$(CC) $(CFLAGS) -c text.c
text: text.o text.o
	$(LD) $(LDFLAGS) start.o text.o -o text.coff
	../bin/coff2noff text.coff text

mysort.o: mysort.c
	$(CC) $(CFLAGS) -c mysort.c
mysort: mysort.o mysort.o
	$(LD) $(LDFLAGS) start.o mysort.o -o mysort.coff
	../bin/coff2noff mysort.coff mysort

taofile.o: taofile.c
	$(CC) $(CFLAGS) -c taofile.c
taofile: taofile.o taofile.o
	$(LD) $(LDFLAGS) start.o taofile.o -o taofile.coff
	../bin/coff2noff taofile.coff taofile

mofile.o: mofile.c
	$(CC) $(CFLAGS) -c mofile.c
mofile: mofile.o mofile.o
	$(LD) $(LDFLAGS) start.o mofile.o -o mofile.coff
	../bin/coff2noff mofile.coff mofile

echo.o: echo.c
	$(CC) $(CFLAGS) -c echo.c
echo: echo.o echo.o
	$(LD) $(LDFLAGS) start.o echo.o -o echo.coff
	../bin/coff2noff echo.coff echo

cat.o: cat.c
	$(CC) $(CFLAGS) -c cat.c
cat: cat.o cat.o
	$(LD) $(LDFLAGS) start.o cat.o -o cat.coff
	../bin/coff2noff cat.coff cat

copy.o: copy.c
	$(CC) $(CFLAGS) -c copy.c
copy: copy.o copy.o
	$(LD) $(LDFLAGS) start.o copy.o -o copy.coff
	../bin/coff2noff copy.coff copy

reverse.o: reverse.c
	$(CC) $(CFLAGS) -c reverse.c
reverse: reverse.o reverse.o
	$(LD) $(LDFLAGS) start.o reverse.o -o reverse.coff
	../bin/coff2noff reverse.coff reverse

append.o: append.c
	$(CC) $(CFLAGS) -c append.c
append: append.o append.o
	$(LD) $(LDFLAGS) start.o append.o -o append.coff
	../bin/coff2noff append.coff append

kiemtra.o: kiemtra.c
	$(CC) $(CFLAGS) -c kiemtra.c
kiemtra: kiemtra.o kiemtra.o
	$(LD) $(LDFLAGS) start.o kiemtra.o -o kiemtra.coff
	../bin/coff2noff kiemtra.coff kiemtra
