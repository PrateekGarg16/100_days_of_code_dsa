/* Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]] */

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (top <= bottom && left <= right) {
        // Right along top row
        for (int j = left; j <= right; j++) {
            printf("%d ", matrix[top][j]);
        }
        top++;

        // Down along right column
        for (int i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Left along bottom row (if row remains)
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                printf("%d ", matrix[bottom][j]);
            }
            bottom--;
        }

        // Up along left column (if column remains)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
    printf("\n");
    return 0;
}
