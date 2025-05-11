#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[50];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to search: ");
    fgets(substr, sizeof(substr), stdin);

    // Remove newline characters if present
    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';

    // Check if substring exists
    if (strstr(str, substr) != NULL) {
        printf("Substring is present in the string.\n");
    } else {
        printf("Substring is NOT present in the string.\n");
    }

    return 0;
}

