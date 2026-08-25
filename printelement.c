#include <stdio.h>

// Function prototypes
void readArray(int arr[], int index, int size);
void printArray(int arr[], int index, int size);

int main() {
    int size;
    printf("Enter the size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    readArray(arr, 0, size);
    printf("The elements in the array are: ");
    printArray(arr, 0, size);
    printf("\n");

    return 0;
}
void readArray(int arr[], int index, int size) {
    if (index >= size) {
        return;
    }
    scanf("%d", &arr[index]);
    readArray(arr, index + 1, size);
}
void printArray(int arr[], int index, int size) {
    if (index >= size) {
        return;
    }
    printf("%d ", arr[index]);
    printArray(arr, index + 1, size);
}
