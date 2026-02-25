/* Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

Input:
- First line: two integers m and n
- Next m lines: n integers each */

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

    int sum = 0;
    int min_size = (m < n) ? m : n;  // Diagonal length
    for(int i = 0; i < min_size; i++) {
        sum += matrix[i][i];
    }

    printf("%d\n", sum);
    return 0;
}
