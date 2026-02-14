/* Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers */

#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Two-pointer approach: left from start, right from end
    for(int left = 0, right = n - 1; left < right; left++, right--) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }
    
    // Print reversed array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("/n");

    return 0;
}
