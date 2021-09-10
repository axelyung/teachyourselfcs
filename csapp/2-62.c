#include <stdio.h>

char int_shifts_are_arithmetic() { return !(0x0 >> 1); }

int main() { printf("%d", int_shifts_are_arithmetic()); }
