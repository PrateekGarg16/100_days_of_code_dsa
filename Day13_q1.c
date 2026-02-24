/* Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

Input:
- First line: two integers r and c representing the number of rows and columns
- Next r lines: c integers each representing the matrix elements */

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int matrix[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    while (top <= bottom && left <= right) {
        // Top row left to right
        for(int j = left; j <= right; j++) {
            printf("%d ", matrix[top][j]);
        }
        top++;

        // Right column top to bottom
        for(int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Bottom row right to left (if needed)
        if (top <= bottom) {
            for(int j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }

        // Left column bottom to top (if needed)
        if (left <= right) {
            for(int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
    printf("\n");
    return 0;
}
