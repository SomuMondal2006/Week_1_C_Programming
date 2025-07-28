//Find largest element in array
//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1


#include <stdio.h>
int findLargest(int arr[], int size) {
    int max = arr[0];  
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr1[] = {1, 8, 7, 56, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Largest: %d\n", findLargest(arr1, size1)); 
    int arr2[] = {5, 5, 5, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Largest: %d\n", findLargest(arr2, size2)); 
    int arr3[] = {10};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Largest: %d\n", findLargest(arr3, size3)); 
    return 0;
}

