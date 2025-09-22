# Makefile

CC = gcc
CFLAGS = -Wall

all: main

main: name.o name_reverse.o name_length.o
	$(CC) $(CFLAGS) -o main name.o name_reverse.o name_length.o

name.o: name.c name_reverse.h name_length.h
	$(CC) $(CFLAGS) -c name.c

name_reverse.o: name_reverse.c name_reverse.h
	$(CC) $(CFLAGS) -c name_reverse.c

name_length.o: name_length.c name_length.h
	$(CC) $(CFLAGS) -c name_length.c

clean:
	rm -f *.o main
