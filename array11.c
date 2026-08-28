#include <stdio.h>
#include <limits.h> 
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        return -1; 
    }
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest == INT_MIN) {
        return -1;
    }

    return second_largest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = findSecondLargest(arr, size);
    
    if (result == -1) {
        printf("No valid second largest element found.\n");
    } else {
        printf("The second largest element is: %d\n", result);
    }
    
    return 0;
}
