#include <stdio.h>

int main() {
    int x = 0xff000000;
    printf("a = %d\n", !!x);
    printf("b = %d\n", !!~x);
    printf("c = %d\n", !!(x & 0x0000ff));
    printf("d = %d\n", !!(~x & 0xff));
}
