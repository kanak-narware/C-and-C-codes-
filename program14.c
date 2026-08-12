#include <stdio.h>

int main() {
    char ch;

    // Ask user for a character input
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check for Uppercase / Capital letters
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE (capital) letter.\n", ch);
    }
    // Check for Lowercase letters
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE letter.\n", ch);
    }
    // Check for Digits
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a DIGIT.\n", ch);
    }
    // Anything else is a special character
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}
