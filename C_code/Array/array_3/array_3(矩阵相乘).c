#include <stdio.h>

#define ROW_SIZE 3
#define COL_SIZE 3

void matrixMultiply(int mat1[][COL_SIZE], int mat2[][COL_SIZE], int result[][COL_SIZE]) {
    int i, j, k;

    // 初始化结果矩阵
    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            result[i][j] = 0;
        }
    }

    // 矩阵相乘
    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            for (k = 0; k < COL_SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][COL_SIZE]) {
    int i, j;
    for (i = 0; i < ROW_SIZE; i++) {
        for (j = 0; j < COL_SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROW_SIZE][COL_SIZE] = {{1, 2, 3},
                                     {4, 5, 6},
                                     {7, 8, 9}};

    int mat2[ROW_SIZE][COL_SIZE] = {{9, 8, 7},
                                     {6, 5, 4},
                                     {3, 2, 1}};

    int result[ROW_SIZE][COL_SIZE];

    // 调用矩阵相乘函数
    matrixMultiply(mat1, mat2, result);

    printf("Resultant Matrix:\n");
    printMatrix(result);

    return 0;
}
/* #include <stdio.h>

// 矩阵相乘函数
void matrixMultiply(int mat1[][100], int mat2[][100], int res[][100], int rows1, int cols1, int cols2) {
    int i, j, k;
    for (i = 0; i < rows1; ++i) {
        for (j = 0; j < cols2; ++j) {
            res[i][j] = 0;
            for (k = 0; k < cols1; ++k) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// 打印矩阵函数
void printMatrix(int mat[][100], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    // 检查矩阵能否相乘
    if (cols1 != rows2) {
        printf("Error! Number of columns of first matrix not equal to number of rows of second matrix.\n");
        return 1;
    }

    int mat1[100][100], mat2[100][100], res[100][100];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // 矩阵相乘
    matrixMultiply(mat1, mat2, res, rows1, cols1, cols2);

    // 打印结果矩阵
    printf("Resultant matrix after multiplication:\n");
    printMatrix(res, rows1, cols2);

    return 0;
}
 */