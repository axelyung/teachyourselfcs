#include <stdio.h>

int main() {
    float f, c;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 30;

    f = lower;
    printf("%3s\t%6s\n", "far", "cel");
    while (f <= upper) {
	c = 5.0 * (f - 32) / 9.0;
	printf("%3.0f\t%6.1f\n", f, c);
	f += step;
    }
    return 0;
}
