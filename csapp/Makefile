# A basic makefile for "circle".

CC = gcc
CFLAGS = -Wall g -std=c99 
LDFLAGS = -lm

build:
	@ls -rt *.c | tail -1 | xargs gcc
	@echo
	@./a.out
	@rm ./a.out
