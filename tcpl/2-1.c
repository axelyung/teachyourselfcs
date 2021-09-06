#include <stdio.h>

#define MAX_LENGTH 1024
#define TABSPACES 3
#define TAB 'T'
#define SPACE 'S'

int get_line(char line[], int maxline);

void entab(char in[], char out[], int len);

int main() {
    unsigned char uchar_min = 0x00;
    unsigned char uchar_max = 0xFF;
    printf("%20s %+8d %+8d\n", "unsigned char", uchar_min, uchar_max);

    char char_min = 0b0000001;
    char char_max = 0b1111111;
    printf("%20s %+8d %+8d\n", "char", char_min, char_max);
}

