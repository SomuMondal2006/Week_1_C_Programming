//Check if string is palindrome
//https://www.geeksforgeeks.org/problems/palindrome-string0817/1


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(const char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    char s[1000001];  
    scanf("%s", s);
    if (isPalindrome(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}

