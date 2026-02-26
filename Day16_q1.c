/* Problem: Given an array of integers, count the frequency of each distinct element and print the result.

Input:
- First line: integer n (size of array)
- Second line: n integers */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[1000];  // Assuming n <= 1000
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int freq[1000] = {0};  // freq[i] tracks frequency or 0 if skipped
    
    for(int i = 0; i < n; i++) {
        if(freq[i] == 0) {  // Not yet processed
            int count = 1;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;  // Mark duplicate to skip later
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    
    return 0;
}

