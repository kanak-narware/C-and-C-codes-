#include <stdio.h>
void findMinMax(int arr[], int index, int len, int *min, int *max) {
    if (index == len - 1) {
        if (arr[index] < *min) {
            *min = arr[index];
        }
        if (arr[index] > *max) {
            *max = arr[index];
        }
        return;
    }
    if (arr[index] < *min) {
        *min = arr[index];
    }
    if (arr[index] > *max) {
        *max = arr[index];
    }
    findMinMax(arr, index + 1, len, min, max);
}

int main() {
    int arr[] = {12, 3, 15, 7, -5, 9, 21};
    int len = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    findMinMax(arr, 0, len, &min, &max);
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
