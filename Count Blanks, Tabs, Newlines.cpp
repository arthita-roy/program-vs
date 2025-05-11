#include <stdio.h>
#include<string.h>
int main() {
    char input[1000];
    int blanks = 0, tabs = 0, newlines = 0;

    printf("Enter a line of text:\n");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ')
            blanks++;
        else if (input[i] == '\t')
            tabs++;
        else if (input[i] == '\n')
            newlines++;
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", blanks, tabs, newlines);
    return 0;
}

