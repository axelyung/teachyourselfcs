#include <stdio.h>

#define MAX_LENGTH 100

int getLine(char line[], int maxline);
void reverse(char in[], char out[], int len);

int main(void) {
    while (1) {
	printf("please enter some text: ");
	// create new line
	char line[MAX_LENGTH];

	// get new line
	int len = getLine(line, MAX_LENGTH);

	// if length == 0 exit
	if (len == 0) break;

	// create reverse line
	char reversed[MAX_LENGTH];
	// call reverse on new line
	reverse(line, reversed, len);
	// print reversed line
	printf("reversed: %s\n", reversed);
    };
    printf("goodbye!");
    return 0;
}

int getLine(char line[], int maxline) {
    int i;
    for (i = 0; i < MAX_LENGTH; i++) {
	int c = getchar();
	if (c == EOF || c == '\n') {
	    break;
	}
	line[i] = c;
    }
    line[i + 1] = '\0';
    return i;
}

void reverse(char in[], char out[], int len) {
    for (int i = 0; i < len; i++) {
	out[len - i - 1] = in[i];
    }
}
