#include <stdio.h>

int main() {
    int amount;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(notes) / sizeof(notes[0]);

    printf("Enter the total amount: ");
    scanf("%d", &amount);

    printf("\nCurrency Breakdown:\n");
    for (int i = 0; i < n; i++) {
        if (amount >= notes[i]) {
            int count = amount / notes[i];
            amount = amount % notes[i];
            printf("%d : %d\n", notes[i], count);
        }
    }

    return 0;
}