/* Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory. */

#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "hello";
    int sSize = strlen(s);
    
    reverseString(s, sSize);
    printf("%s\n", s);  
    
    return 0;
}


 
