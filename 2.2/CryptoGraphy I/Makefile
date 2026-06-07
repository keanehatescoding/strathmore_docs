.PHONY: all clean test

CC = gcc
CFLAGS = -g -lcrypto
all: rsa.c
	$(CC) $(CFLAGS) $<  -o rsa
run: rsa
	./$<
tes:
	valgrind ./rsa
