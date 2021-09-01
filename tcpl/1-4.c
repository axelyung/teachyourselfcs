#include <stdio.h>

int main() {
    float c, f;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 9;

    c = lower;
    printf("%3s\t%6s\n", "cel", "far");
    while (c <= upper) {
	f = c * 9.0 / 5.0 + 32.0;
	printf("%3.0f\t%6.1f\n", c, f);
	c += step;
    }
    return 0;
}
