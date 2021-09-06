#include <stdio.h>

#define MAX_LENGTH 1024
#define TABSPACES 3
#define TAB 'T'
#define SPACE 'S'

int get_line(char line[], int maxline);

void entab(char in[], char out[], int len);

int main() {
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
	entab(line, replaced, len);
	printf("replaced %d spaces a tab: %s\n", TABSPACES, replaced);
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

void entab(char in[], char out[], int len) {
    // create array to store "tab" locations
    int in_loc = 0;
    int out_loc = 0;
    // iterate through array to find "tab" locations
    for (in_loc = 0; in_loc < len;) {
	if (in[in_loc] == SPACE) {
	    int not_tab = 0;
	    // check to see if next (TABSPACES - 1) chars are SPACES
	    for (int j = 1; j < TABSPACES; j++) {
		if (in[in_loc + j] != SPACE) {
		    not_tab = 1;
		    break;
		}
	    }
	    if (not_tab) {
		out[out_loc++] = in[in_loc++];
	    } else {
		out[out_loc++] = TAB;
		in_loc += TABSPACES;
	    }
	} else {
	    out[out_loc++] = in[in_loc++];
	}
    }
}
