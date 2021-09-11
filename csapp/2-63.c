#include <stdio.h>

unsigned srl(unsigned x, int k);
int sra(int x, int k);
void print_binary(size_t const size, void const *const ptr);
long word_size = 8 * sizeof(int);

int main() {
    printf("word size = %ld bits\n", word_size);
    unsigned target = 20;
    printf("%d %d", target, srl(target, 2));
    return 0;
}

unsigned srl(unsigned x, int k) {
    printf("x = %d = ", x);
    print_binary(sizeof(x), &x);
    unsigned xsra = (int)x >> k;
    printf("xsra = %d\n", xsra);
    return 0;
}

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
