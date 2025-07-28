// Insert an element at end of array
// https://www.geeksforgeeks.org/problems/array-insert-at-end/1


#include <stdio.h>
void insertAtEnd(int arr[], int *size, int val, int capacity) {
    if (*size < capacity) {
        arr[*size] = val;
        (*size)++;
    } else {
        printf("Array is full. Cannot insert %d.\n", val);
    }
}
int main() {
    int capacity = 100;
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;
    int val = 90;
    insertAtEnd(arr, &size, val, capacity);
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

