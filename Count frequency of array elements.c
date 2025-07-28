//Count frequency of array elements
//https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1


#include <stdio.h>
int main() {
    int arr[] = {2, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    int i;  
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }
    for (i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] <= n) {
            freq[arr[i] - 1]++;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", freq[i]);
    }
    printf("\n");
    return 0;
}

