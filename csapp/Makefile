CC = gcc
CFLAGS = -Wall -std=c99
OUT = out

build:
	ls -rt *.c | tail -n2 | head -n1 | xargs -J % $(CC) % utils.c $(CFLAGS) -o $(OUT)
	@echo
	@./$(OUT)
	@rm ./$(OUT)
