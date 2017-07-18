// Created by BaoQiang at 2017/7/18 18:17

#include <stdio.h>

int main() {
    float x, y, c;
    printf("Please input x and y:\n");
    scanf("%f%f", &x, &y);
    c = x > y ? x : y;
    printf("Max of (%f,%f) is %f", x, y, c);
}