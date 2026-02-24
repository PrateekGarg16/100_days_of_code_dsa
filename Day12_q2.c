/* Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

 

Example 1:


Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]] */


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

    int toeplitz = 1;
    // Check each non-first-row/column element against its top-left neighbor
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] != matrix[i-1][j-1]) {
                toeplitz = 0;
                goto end;
            }
        }
    }
    
    end:
    printf("%s\n", toeplitz ? "Yes" : "No");
    return 0;
}
