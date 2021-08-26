#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len){
	int i;
	for(i=0; i< len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_short(short x) {
	show_bytes((byte_pointer) &x, sizeof(short));
}

void test_show_bytes(int val) {
	printf("======\n");
	printf(" int = %i\n",val);
	int ival = val;
	show_int(ival);

	float fval = (float) ival;
	show_float(fval);

	int *pval = &ival;
	show_pointer(pval);

	short sval = (short) ival;
	show_short(sval);
}

int main() {
	test_show_bytes(1);
	test_show_bytes(2);
	test_show_bytes(-1);
	test_show_bytes(7);
	return 0;
}
