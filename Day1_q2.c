/* Q2 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.*/

#include <stdio.h>
#define MAX_SIZE 1000

int main() {
    int n;
    scanf("%d", &n);
    
    int nums[MAX_SIZE];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int target;
    scanf("%d", &target);
    
    int found = 0;
    int indices[2];
    
    for(int i = 0; i < n - 1 && !found; i++) {
        for(int j = i + 1; j < n && !found; j++) {
            if(nums[i] + nums[j] == target) {
                indices[0] = i;
                indices[1] = j;
                found = 1;
            }
        }
    }
    
    printf("[%d,%d]\n", indices[0], indices[1]);
    
    return 0;
}
