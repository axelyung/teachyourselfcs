#include <assert.h>
#include <stdio.h>

typedef unsigned int uint;
typedef unsigned int *bp;  // byte pointer

uint merge(uint x, uint y) {
    printf("x = %x\n", x);
    printf("y = %x\n", y);
    // MSB = 0, LSB = 1

    bp op = (bp)0;

    bp xp = (bp)&x;
    bp yp = (bp)&y;

    for (char i = 0; i < sizeof(uint); i++) {
	printf("%d ", i);

	printf("%.2x ", xp[i]);
	printf("%.2x ", yp[i]);

	printf("here\n");
	if (i == 0) {
	    op[i] = xp[i];
	} else {
	    op[i] = yp[i];
	}
    }

    uint o = *op;
    printf("%x", o);

    return o;
}

int main() {
    uint x = 0x89ABCDEF;
    uint y = 0x76543210;

    uint lhs = (x & ~0xFF);
    printf("%x\n", lhs);

    uint rhs = (y & 0xFF);
    printf("%x\n", rhs);

    printf("%x\n", lhs | rhs);
}
