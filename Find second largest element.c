//Find second largest element
//https://www.geeksforgeeks.org/problems/second-largest3735/1


#include <stdio.h>
int findSecondLargest(int arr[], int size) {
    int first = -1, second = -1;
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}
int main() {
    int arr1[] = {12, 35, 1, 10, 34, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Second Largest: %d\n", findSecondLargest(arr1, size1)); 
    int arr2[] = {10, 5, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Second Largest: %d\n", findSecondLargest(arr2, size2)); 
    int arr3[] = {10, 10, 10};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Second Largest: %d\n", findSecondLargest(arr3, size3));  
    return 0;
}

