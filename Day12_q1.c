/* Problem: Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

Input:
- First line: two integers m and n representing the number of rows and columns
- Next m lines: n integers each representing the elements of the matrix */

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    if (m != n) {
        printf("No\n");
        return 0;
    }

    int matrix[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int symmetric = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < i; j++) {  // Check only upper triangle
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    printf("%s\n", symmetric ? "Yes" : "No");
    return 0;
}
