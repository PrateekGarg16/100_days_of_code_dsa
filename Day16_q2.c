/* Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3 */

#include <stdio.h>

// Helper: Reverse subarray from start to end (inclusive)
void reverse(int nums[], int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

// Rotate right by k steps in-place
void rotate(int nums[], int n, int k) {
    if (n <= 1) return;
    k %= n;  // Handle k >= n
    reverse(nums, n - k, n - 1);  // Reverse last k
    reverse(nums, 0, n - k - 1);  // Reverse first n-k
    reverse(nums, 0, n - 1);      // Reverse entire
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);  // Input: n k (adapt as needed)
    
    int nums[100];  // Assume n <= 100
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    rotate(nums, n, k);
    
    printf("Rotated: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
