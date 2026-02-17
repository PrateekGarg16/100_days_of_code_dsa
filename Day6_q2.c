/* Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array. */

#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Two-pointer: compact non-zeros to front
    int k = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[k++] = arr[i];
        }
    }
    // Fill rest with zeros
    for(int i = k; i < n; i++) {
        arr[i] = 0;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

