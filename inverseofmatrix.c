
#include <stdio.h>

int main() {
    int A[2][2], determinant, inverse[2][2];

    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    if (determinant == 0) {
        printf("Inverse doesn't exist.\n");
    } else {
        inverse[0][0] = A[1][1] / determinant;
        inverse[0][1] = -A[0][1] / determinant;
        inverse[1][0] = -A[1][0] / determinant;
        inverse[1][1] = A[0][0] / determinant;

        printf("Inverse of the matrix is:\n");
        printf("%d %d\n", inverse[0][0], inverse[0][1]);
        printf("%d %d\n", inverse[1][0], inverse[1][1]);
    }

    return 0;
}
