#include "./utils.h"
#include <stdio.h>

void print_binary(size_t const size, void const *const ptr) {
    unsigned char *b = (unsigned char *)ptr;
    unsigned char bit;
    int i, j;
    // iterate through each byte starting with most significant
    for (i = size - 1; i >= 0; i--) {
	// iterate through each bit starting with most significant
	for (j = 7; j >= 0; j--) {
	    // logical rightshift by j and mask with 1
	    bit = (b[i] >> j) & 1;
	    printf("%u", bit);
	}
	// print divider between bytes
	if (i > 0) printf("|");
    }
    // print new line
    puts("");
}
