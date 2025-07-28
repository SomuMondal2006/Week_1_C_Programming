//Rotate array by one
//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1


#include <stdio.h>
void rotateByOne(int arr[], int n) {
    int last = arr[n - 1];  
    int i;
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;  
}
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    rotateByOne(arr1, n1);
    printArray(arr1, n1);  
    int arr2[] = {9, 8, 7, 6, 4, 2, 1, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    rotateByOne(arr2, n2);
    printArray(arr2, n2);  
    return 0;
}

