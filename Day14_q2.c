/* You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]] */

#include <stdio.h>

#define N 3   // change N for different size

void rotate(int matrix[N][N]) {
    int i, j, temp;

    // Step 1: Transpose
    for(i = 0; i < N; i++) {
        for(j = i; j < N; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Step 2: Reverse each row
    for(i = 0; i < N; i++) {
        for(j = 0; j < N/2; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[i][N - j - 1];
            matrix[i][N - j - 1] = temp;
        }
    }
}

int main() {
    int matrix[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    rotate(matrix);

    printf("Rotated Matrix:\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
