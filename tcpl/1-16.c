#include <stdio.h>

#define MAX_LENGTH 100

int getLine(char line[], int maxline);
void copy(char from[], char to[]);

int main(void) {
    int len, max;
    char line[MAX_LENGTH], longest[MAX_LENGTH];

    max = len = 0;
    do {
	len = getLine(line, MAX_LENGTH);
	printf("len = %d\n", len);
	if (len > max) {
	    max = len;
	    printf("new max found: %d\n", max);
	    copy(line, longest);
	}
    } while (len > 0);
    printf("the longest line was: \"%s\"\n", longest);
    printf("(%d characters long)\n", max);
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

void copy(char from[], char to[]) {
    int i = 0;
    int last;
    do {
	last = to[i] = from[i];
	i++;
    } while (last != '\n');
}

