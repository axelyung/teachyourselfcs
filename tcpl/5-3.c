#include <stdio.h>

void str_cat(char *target, char *suffix);

int main() {
    char target[] = "hello my name is ";
    char suffix[] = "AXEL";
    str_cat(target, suffix);
    printf("%s\n", target);
    return 0;
}

void str_cat(char *target, char *suffix) {
    int i, j;
    i = j = 0;

    // find end of target
    while (target[i] != '\0') i++;

    // append suffix to target until end
    while ((target[i++] = suffix[j++]) != '\0')
	;
}
