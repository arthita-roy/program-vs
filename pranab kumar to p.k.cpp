#include <stdio.h>
#include <string.h>

int main() {
    char fname[20], mname[20], lname[20];

    printf("Enter first name: ");
    scanf("%s", fname);
    printf("Enter middle name: ");
    scanf("%s", mname);
    printf("Enter last name: ");
    scanf("%s", lname);

    printf("%c. %c. %s\n", fname[0], mname[0], lname);
    return 0;
}

