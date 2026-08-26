#include <stdio.h>
void findMinMaxRecursive(int arr[], int index, int len, int *min, int *max) {
    if (index == len - 1) {
        if (arr[index] < *min) *min = arr[index];
        if (arr[index] > *max) *max = arr[index];
        return;
    }
    if (arr[index] < *min) {
        *min = arr[index];
    }
    if (arr[index] > *max) {
        *max = arr[index];
    }
    findMinMaxRecursive(arr, index + 1, len, min, max);
}

int main() {
    int arr[] = {12, 3, 15, -7, 9, 24, 0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    findMinMaxRecursive(arr, 0, len, &min, &max);
    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);

    return 0;
}
