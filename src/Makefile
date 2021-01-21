# https://www.gnu.org/software/make/manual/html_node/Makefile-Basics.html#Makefile-Basics
SHELL = /bin/sh
.SUFFIXES:
.SUFFIXES: .c .o
IDIR =../include
# Which compiler
CC=gcc
#CC=tcc
#CFLAGS=-I$(IDIR)
C99MODE=-std=c99
LFLAGS=-lm
ODIR =obj
LDIR =../lib

_DEPS = leddefinitions.h mainsub.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# The pattern for patsubst, does NOT contain '%'
foo = $(patsubst  x,y,x    x    x)
mjh = $(patsubst     e%,X%      ,M ike Fr e d Ella       )
# The pattern for patsubst, does contain '%'
bar := $(patsubst x%,y,x    x    x)
#	$(patsubst x%,y%,xa xb xc)
# Will be "ya yb yc"

# The variable 'foo', is a result from a patsubst-pattern, that did NOT contain a '%'
# The variable 'bar', is a result from a patsubst-pattern, that did contain a '%'
#all ::
#    @echo 'foo is: "$(foo)"'
#    @echo 'bar is: "$(bar)"'


# Options for development : check -ansi for comment style
CFLAGS=-g -Wall  -lm 

all::  
	@echo $(mjh)
	@echo $(subst ee,EE,feet on the street)
	echo $(patsubst %.c,%.o,x.c.c bar.c)
	echo $(patsubst x%,y%,xa xb xc)
	echo 'foo is: "$(foo)"'
	echo 'bar is: "$(bar)"'
	echo 'mjh is: "$(mjh)"'
#	screenDiagonal
clean:
	@echo 'cleaning'
# DO NOT DELETE

screenDiagonal.o: /usr/include/stdio.h /usr/include/math.h
main.o: /usr/include/stdio.h


