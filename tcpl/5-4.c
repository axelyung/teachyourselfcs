#include <stdio.h>

int has_suffix(char *target, char *suffix);

int main() {
    char target[] = "foobarbaz";
    char suffix[] = "buxx";
    if (has_suffix(target, suffix)) {
	printf("string \"%s\" ends with \"%s\"\n", target, suffix);
    } else {
	printf("string \"%s\" does not end with \"%s\"\n", target, suffix);
    }
    return 0;
}

int has_suffix(char *target, char *suffix) {
    int target_length, suffix_length;
    target_length = suffix_length = 0;

    // find target length
    while (target[target_length] != '\0') target_length++;
    printf("\"%s\" is %d chars long\n", target, target_length);

    // find suffix length
    while (suffix[suffix_length] != '\0') suffix_length++;
    printf("\"%s\" is %d chars long\n", suffix, suffix_length);

    if (target_length < suffix_length) return 0;

    // find where suffix would start in target
    char *suffix_start = target + target_length - suffix_length;

    printf("target start is %p\n", target);
    printf("suffix start is %p\n", suffix_start);
    // iterate through end of target and check that each
    for (int i = 0; i < suffix_length; i++) {
	if (suffix_start[i] != suffix[i]) return 0;
    }

    return 1;
}
