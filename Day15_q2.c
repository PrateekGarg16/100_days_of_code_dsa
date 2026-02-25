/* Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]  */


#include <stdio.h>

#define R 3
#define C 3

int main() {
    int matrix[R][C] = {
        {1,1,1},
        {1,0,1},
        {1,1,1}
    };

    int i, j;
    int firstRowZero = 0, firstColZero = 0;

    // Step 1: Check first row
    for(j = 0; j < C; j++)
        if(matrix[0][j] == 0)
            firstRowZero = 1;

    // Step 2: Check first column
    for(i = 0; i < R; i++)
        if(matrix[i][0] == 0)
            firstColZero = 1;

    // Step 3: Mark zeros in first row/column
    for(i = 1; i < R; i++) {
        for(j = 1; j < C; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Step 4: Set cells to zero based on markers
    for(i = 1; i < R; i++) {
        for(j = 1; j < C; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }

    // Step 5: Update first row
    if(firstRowZero)
        for(j = 0; j < C; j++)
            matrix[0][j] = 0;

    // Step 6: Update first column
    if(firstColZero)
        for(i = 0; i < R; i++)
            matrix[i][0] = 0;

    // Print result
    printf("Updated Matrix:\n");
    for(i = 0; i < R; i++) {
        for(j = 0; j < C; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
