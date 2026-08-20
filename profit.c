#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;
    printf("Enter cost price: ");
    scanf("%f", &costPrice);

    printf("Enter selling price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        printf("Profit = %.2f\n", amount);
    } 
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        printf("Loss = %.2f\n", amount);
    } 
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}