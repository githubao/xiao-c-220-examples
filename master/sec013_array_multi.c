// Created by BaoQiang at 2017/7/19 20:38

#include <stdio.h>

#define ROW 3
#define COL 4

int main() {
    int matrixA[ROW][COL], matrixB[COL][ROW];
    int i, j;

    for (i = 0; i < ROW; ++i) {
        for (j = 0; j < COL; ++j) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    for (i = 0; i < ROW; ++i) {
        for (j = 0; j < COL; ++j) {
            matrixB[j][i] = matrixA[i][j];
        }
    }

    for (i = 0; i < COL; ++i) {
        for (j = 0; j < ROW; ++j) {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

}