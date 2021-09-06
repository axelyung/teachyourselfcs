#include <stdio.h>

#define MAX_LENGTH 100
#define SPACES 3

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
	printf("replaced tabs w/ %d spaces: %s\n", SPACES, replaced);
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
    int i = 0;    // index in array
    int pad = 0;  // diff between in and out location
    int count = 0;
    for (; i < len;) {
	if (in[i] == 'T') {
	    for (int j = 0; j < SPACES; j++) {
		out[i + pad + j] = 'S';
	    }
	    pad += SPACES - 1;
	    count += 1;
	} else {
	    out[i + pad] = in[i];
	}
	i++;
    }
    out[i + pad + 1] = '\0';
    printf("replaced %d tabs\n", count);
}
