#include <stdio.h>

void multiplyMatrices(int *mat1, int *mat2, int *result, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            *(result + i * n + j) = 0;
            for (int k = 0; k < n; ++k) {
                *(result + i * n + j) += *(mat1 + i * n + k) * *(mat2 + k * n + j);
            }
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Size of Row: ");
    scanf("%d", &n);

    int matrix1[n][n], matrix2[n][n], result[n][n];

    printf("Matrix 1:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Matrix 2:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    multiplyMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], n);

    printf("Product:\n");
    printMatrix(&result[0][0], n, n);

    return 0;
}
