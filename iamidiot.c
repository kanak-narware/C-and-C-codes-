#include <stdio.h>
int main() {
    char target[] = "I AM IDIOT";
    char input_char;
    int index = 0;

    printf("Enter your name: ");
    while ((input_char = getchar()) != '\n' && input_char != EOF) {
        printf("%c", target[index]);
        index++;
        if (target[index] == '\0') {
            index = 0;
        }
    }

    printf("\n");
    return 0;
}
