#include <stdio.h>

int main() {
    double num;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Check the conditions
    if (num > 0.0) {
        printf("%.2lf is a positive number.\n", num);
    } 
    else if (num < 0.0) {
        printf("%.2lf is a negative number.\n", num);
    } 
    else {
        printf("The number is zero.\n");
    }

    return 0;
}
