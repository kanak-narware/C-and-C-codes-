#include <stdio.h>
int sumArrayRecursive(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sumArrayRecursive(arr, n - 1);
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);    
    int totalSum = sumArrayRecursive(arr, size);    
    printf("Sum of array elements: %d\n", totalSum);
    
    return 0;
}
