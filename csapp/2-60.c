#include <assert.h>
#include <stdio.h>

typedef unsigned int uint;
typedef unsigned int *bp;  // byte pointer

unsigned replace_byte(unsigned x, int i, unsigned char b) { return 0; }

int main() {
    printf("%x", ) uint x = 0x89ABCDEF;
    uint y = 0x76543210;

    uint lhs = (x & ~0xFF);
    printf("%x\n", lhs);

    uint rhs = (y & 0xFF);
    printf("%x\n", rhs);

    printf("%x\n", lhs | rhs);
}
