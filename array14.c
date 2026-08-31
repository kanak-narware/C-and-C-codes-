#include <stdio.h>
int main() {
    int size, i;
    int negative_count = 0; 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size]; 
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < size; i++) {
        if(arr[i] < 0) {
            negative_count++; 
        }
    }
    printf("\nTotal number of negative elements = %d\n", negative_count);
    return 0;
}
