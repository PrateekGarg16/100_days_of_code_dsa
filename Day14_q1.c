/* Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

Input:
- First line: integer n representing number of rows and columns
- Next n lines: n integers each representing the matrix elements */

#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int n;
    scanf("%d", &n);

    int matrix[MAX_SIZE][MAX_SIZE];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int is_identity = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j) {
                if (matrix[i][j] != 1) {
                    is_identity = 0;
                    goto end;
                }
            } else {
                if (matrix[i][j] != 0) {
                    is_identity = 0;
                    goto end;
                }
            }
        }
    }
    
    end:
    printf("%s\n", is_identity ? "Yes" : "No");
    return 0;
}
