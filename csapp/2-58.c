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

int is_little_endian(){
	// MSB = 0, LSB = 1
	int x = 1;
	show_bytes((byte_pointer) &x, sizeof(int));

	int* xp = &x;
	show_bytes((byte_pointer) &xp, sizeof(int*));

	char* cp = (char*)xp;
	show_bytes((byte_pointer) &cp, sizeof(char*));

	char c = *cp;
	show_bytes((byte_pointer) &c, sizeof(char));

	int ret = !c;
	show_bytes((byte_pointer) &ret, sizeof(int));
	return ret;
}

int main() {
	printf("%d",is_little_endian());
}
