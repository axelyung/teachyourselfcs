#include <stdio.h>

#define MAX_LENGTH 100

int get_line(char line[], int maxline);
void replace_tabs(char in[], char out[], int len);

int main(void) {
    int len;
    char line[MAX_LENGTH];
    char replaced[MAX_LENGTH];
    for (;;) {
	printf("please enter some text: ");

	// get new line
	len = get_line(line, MAX_LENGTH);

	// if length == 0 exit
	if (len == 0) break;

	// replace tabs with spaces
	replace_tabs(line, replaced, len);
	printf("replaced tabs w/ space: %s\n", replaced);
	// print reversed line
    };
    printf("goodbye!");
    return 0;
}

int get_line(char line[], int maxline) {
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

void replace_tabs(char in[], char out[], int len) {
    int i;
    int limit = len;
    int count = 0;
    for (i = 0; i < limit; i++) {
	if (in[i] == '\t') {
	    out[i++] = ' ';
	    out[i] = ' ';
	    limit++;
	    count++;
	} else {
	    out[i] = in[i];
	}
    }
    out[i + 1] = '\0';
    printf("replaced %d tabs\n", count);
}
