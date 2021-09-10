#include <assert.h>
#include <stdio.h>

typedef unsigned int uint;
typedef unsigned int *bp;  // byte pointer

unsigned replace_byte(unsigned x, int i, unsigned char b);

struct test_case {
    unsigned x;
    int i;
    unsigned char b;
    unsigned expect;
};

int main() {
    struct test_case cases[3] = {
	{0x12345678, 2, 0xAB, 0x12AB5678},
	{0x12345678, 0, 0xAB, 0x123456AB},
	{0x12345678, 3, 0xAB, 0xAB345678},
    };
    for (int i = 0; i < 3; i++) {
	struct test_case c = cases[i];
	unsigned result = replace_byte(c.x, c.i, c.b);
	printf("0x%.8x 0x%.8x\n", result, c.expect);
    }
}

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    unsigned target = 0x000000FF << (i * 8);
    unsigned zeroed = x & ~target;
    unsigned replacement = b << (i * 8);
    return zeroed + replacement;
}
