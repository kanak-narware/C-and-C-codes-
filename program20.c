#include<stdio.h>
int main(){
    int notes[] = {500, 100, 200, 50, 20, 10};
    int n = 8;
    int amount,i;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    printf("Currency Count:\n");
    for (i = 0; i < n; i++) {
        if (amount >= notes[i]) {
            printf("%d : %d\n", notes[i], amount / notes[i]);
            amount = amount % notes[i];
        }
    }

    return 0;
}
}