/* Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]                             */


#include <stdio.h>
#define MAX 1005

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int nums1[MAX];
    for(int i=0; i<n1; i++) scanf("%d", &nums1[i]);

    scanf("%d", &n2);
    int nums2[MAX];
    for(int i=0; i<n2; i++) scanf("%d", &nums2[i]);

    int count[MAX] = {0};
    for(int i=0; i<n1; i++) {
        count[nums1[i]]++;
    }

    int res[MAX], k=0;
    for(int i=0; i<n2; i++) {
        if(count[nums2[i]] > 0) {
            res[k++] = nums2[i];
            count[nums2[i]]--;
        }
    }

    for(int i=0; i<k; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
