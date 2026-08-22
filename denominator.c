#include <stdio.h>

int main() {
    int amount;
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(denominations) / sizeof(denominations[0]);

    // Prompt user for input
    printf("Enter the total amount: ");
    if (scanf("%d", &amount) != 1 || amount < 0) {
        printf("Invalid amount entered.\n");
        return 1;
    }

    printf("\nCurrency Denomination Breakdown:\n");
    printf("--------------------------------\n");
    for (int i = 0; i < size; i++) {
        int notes = amount / denominations[i]; 
        
        if (notes > 0) {
            printf("Rs. %4d : %d note(s)\n", denominations[i], notes);
        }
        amount %= denominations[i]; 
    }

    return 0;
}
