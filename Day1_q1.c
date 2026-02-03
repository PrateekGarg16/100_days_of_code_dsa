/*Q1  Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.*/

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
    int x;
    scanf("%d", &x);
    
    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    
    arr[pos - 1] = x;
    
    for(int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
