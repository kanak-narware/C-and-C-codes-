#include <stdio.h>

#define MAX_CAPACITY 100 

int main() {
    int arr[MAX_CAPACITY] = {10, 20, 30, 40, 50}; 
    int current_size = 5;                        
    int new_element = 25;                        
    int position = 3;                            
    if (current_size >= MAX_CAPACITY) {
        printf("Error: Array capacity reached. Cannot insert.\n");
        return 1;
    }
    if (position < 1 || position > current_size + 1) {
        printf("Error: Invalid position. Position must be between 1 and %d.\n", current_size + 1);
        return 1;
    }
    int index = position - 1;
    for (int i = current_size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = new_element;
    current_size++;
    printf("Array after insertion: ");
    for (int i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
