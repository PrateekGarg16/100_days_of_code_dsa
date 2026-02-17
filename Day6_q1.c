/* Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

Input:
- First line: integer n
- Second line: n space-separated integers (sorted array) */



#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Two-pointer approach for removing duplicates in-place
    int k = 0;  // Next position for unique element
    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i-1]) {
            arr[k] = arr[i];
            k++;
        }
    }
    
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
