//Hackerrank: Arrays - DS
//https://www.hackerrank.com/challenges/arrays-ds/problem


#include <stdio.h>
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

