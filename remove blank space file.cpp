#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r"); // Open file in read mode

    if (fp == NULL) {
        printf("Error: File not found or could not be opened.\n");
        return 1;
    }

    printf("Content after removing spaces:\n");

    while ((ch = fgetc(fp)) != EOF) {
        if (ch != ' ') {
            putchar(ch);
        }
    }

    fclose(fp);
    return 0;
}

