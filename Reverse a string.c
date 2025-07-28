//Reverse a string
//https://www.geeksforgeeks.org/problems/reverse-a-string/1


#include <stdio.h>
#include <string.h>
void reverseString(char* s) {
    int start = 0;
    int end = strlen(s) - 1;
    char temp;
    while (start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char s1[] = "Geeks";
    reverseString(s1);
    printf("%s\n", s1);  
    char s2[] = "for";
    reverseString(s2);
    printf("%s\n", s2);  
    char s3[] = "a";
    reverseString(s3);
    printf("%s\n", s3);  
    return 0;
}

