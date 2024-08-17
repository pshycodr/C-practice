/*

*/

#include <stdio.h>

#define COLS1 3
#define ROWS1 2
#define COLS2 2
#define ROWS2 3

void print2Darr(int arr[ROWS1][COLS2], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS1][COLS1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int matrix2[ROWS2][COLS2] = {
        {1, 4},
        {2, 5},
        {3, 6}
    };

    int ans[ROWS1][COLS2] = {0};

    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            for (int k = 0; k < COLS1; k++) {
                ans[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    print2Darr(ans, ROWS1, COLS2);

    return 0;
}