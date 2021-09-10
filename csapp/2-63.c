#include <stdio.h>
#include "utils.h"

unsigned srl(unsigned x, int k);
int sra(int x, int k);

long word_size = 8 * sizeof(int);

int main() {
    printf("word size = %ld bits\n", word_size);
    unsigned target = 20;
    printf("%d %d", target, srl(target, 2));
}

unsigned srl(unsigned x, int k) {
    print_binary(sizeof(x), &x);
    unsigned xsra = (int)x >> k;
    printf("xsra = %d\n", xsra);
    return 0;
}
