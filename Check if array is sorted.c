//Check if array is sorted
//https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1


#include <stdio.h>
#include <stdbool.h>
bool isSorted(int arr[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("%s\n", isSorted(arr1, n1) ? "true" : "false");  
    int arr2[] = {90, 80, 100, 70, 40, 30};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("%s\n", isSorted(arr2, n2) ? "true" : "false"); 
    return 0;
}

