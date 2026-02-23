/* Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string */

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove trailing newline [web:13]

    int left = 0;
    int right = strlen(s) - 1;
    int is_palindrome = 1;

    while (left < right) {
        if (s[left] != s[right]) {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("%s\n", is_palindrome ? "Yes" : "No");
    return 0;
}

