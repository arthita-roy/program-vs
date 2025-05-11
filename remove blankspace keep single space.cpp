#include <stdio.h>
#include <string.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a sentence with extra spaces:\n");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j++] = str[i];
        } else if (j == 0 || result[j-1] != ' ') {
            result[j++] = ' ';
        }
        i++;
    }

    result[j] = '\0';

    printf("Cleaned sentence:\n%s\n", result);
    return 0;
}

