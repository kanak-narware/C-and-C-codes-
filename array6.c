#include <stdio.h>

int main() {
    int size;

    // Ask user for the size of the array
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[size];

    // Input array elements from the user
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print all negative elements
    printf("\nNegative elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
