/* Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k. */

#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int val;
    scanf("%d", &val);
    
    int k = 0;  
    for(int i = 0; i < n; i++) {
        if(arr[i] != val) {
            arr[k] = arr[i];
            k++;
        }
    }
    
    // Output k (new length), then first k elements
    printf("%d\n", k);
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    if(k > 0) printf("\n");
    
    return 0;
}
