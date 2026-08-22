#include <stdio.h>
int isDivisibleBy11(long long num) {
    if (num < 0) {
        num = -num;
    }
    while (num > 99) {
        long long last_digit = num % 10;
        long long remaining_part = num / 10;
        num = remaining_part - last_digit;
    }
    return (num % 11 == 0);
}

int main() {
    long long number;

    printf("Enter an integer: ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isDivisibleBy11(number)) {
        printf("%lld is divisible by 11.\n", number);
    } else {
        printf("%lld is not divisible by 11.\n", number);
    }

    return 0;
}
