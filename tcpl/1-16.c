#include <stdio.h>

int main(void) {
    int blanks, tabs, newlines, other, c;
    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF) {
	switch (c) {
	    case ' ':
		blanks++;
		break;
	    case '\t':
		tabs++;
		break;
	    case '\n':
		newlines++;
		break;
	    default:
		other++;
	}
    }

    printf("blanks: %d\n", blanks);
    printf("tabs: %d\n", tabs);
    printf("newlines: %d\n", newlines);
    printf("other: %d\n", other);
    return 0;
}
