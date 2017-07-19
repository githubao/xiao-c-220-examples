// Created by BaoQiang at 2017/7/19 20:17

#include <stdio.h>

#define MAX_STUDENT_NUM 30

int main() {
    int cnt = 0;
    int i, j;
    int a[MAX_STUDENT_NUM * 4] = {};
    int avg[MAX_STUDENT_NUM] = {};

    printf("how many students in your class: ");
    scanf("%d", &cnt);

    for (i = 0; i < cnt; ++i) {
        printf("input id,chinese,math,english\n");
        for (j = 0; j < 4; ++j) {
            scanf("%d", &a[i * 4 + j]);
        }
    }

    printf("id,chinese,math,english,avg\n");

    for (i = 0; i < cnt; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%d ", a[i * 4 + j]);
            if (j != 0) {
                avg[i] += a[i * 4 + j];
            }
        }
        printf("%d\n", avg[i]/3);
    }

}