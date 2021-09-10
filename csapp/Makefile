CC = gcc
CFLAGS = -Wall -std=c99 -v

build:
	@ls -rt *.c | tail -n2 | head -n1 | xargs -J % $(CC) $(CFLAGS) % utils.c
	@echo
	@./a.out
	@rm ./a.out
