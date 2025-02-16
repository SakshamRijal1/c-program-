#include <stdio.h>

#define m 3
#define n 3

int main() {
    int a[m][n], b[m][n], c[m][n];
    int i, j;

    // Input for matrix a
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("\nEnter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input for matrix b
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("\nEnter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Display matrix a
    printf("\nMatrix a (%d x %d) is:\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display matrix b
    printf("\nMatrix b (%d x %d) is:\n", m, n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Matrix addition (sum of a and b)
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the result of matrix addition
    printf("\nThe sum of the matrices is:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
