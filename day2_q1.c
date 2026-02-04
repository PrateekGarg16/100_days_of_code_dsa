/* Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer pos (1-based position to delete) */

#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos;
    scanf("%d", &pos);

    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
  
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
