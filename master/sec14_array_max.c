// Created by BaoQiang at 2017/7/19 20:44

#include <stdio.h>

#define MAXN 20
int a[MAXN][MAXN];

int main() {
    int min, max;
    int i, j, n;
    printf("input matrix rank: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    for (min = 9999, i = 0; i < n; ++i) {
        for (max = a[i][0], j = 0; j < n; ++j) {
            if (max < a[i][j]) {
                max = a[i][j];
            }
        }
        if (min > max) {
            min = max;
        }
    }
    printf("the min of the maximum num is: %d\n", min);

    for (max = -9999, i = 0; i < n; ++i) {
        for (min = a[i][0], j = 0; j < n; ++j) {
            if (min > a[i][j]) {
                min = a[i][j];
            }
        }
        if (max < min) {
            max = min;
        }
    }
    printf("the max of the minimum num is: %d\n", max);

}