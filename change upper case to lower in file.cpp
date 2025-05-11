#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    FILE *in, *out;

    in = fopen("input.txt", "r");    // Open the input file for reading
    out = fopen("output.txt", "w");  // Open the output file for writing

    if (in == NULL || out == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'A' && ch <= 'Z')  // If it's an uppercase letter
            ch = ch + 32; 
		else if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;  // Lowercase to uppercase
        }	           // Convert to lowercase (ASCII math)
        fputc(ch, out);              // Write character to output file
    }

    fclose(in);
    fclose(out);

    printf("All uppercase letters converted to lowercase in output.txt\n");
    printf("All lowercase letters converted to uppercase in output.txt\n");
    return 0;
}

