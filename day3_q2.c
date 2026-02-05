/* You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive).
This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element. */

// day3_q2

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int total_sum, array_sum = 0, missing;

    // Input n
    scanf("%d", &n);

    // Input n-1 elements
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        array_sum += arr[i];
    }


