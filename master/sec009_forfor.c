// Created by BaoQiang at 2017/7/18 18:47

#include <stdio.h>

#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int x, y, i, j;

    printf("\n\n    * * * multiply * * *    \n\n");

    x = 9, y = 5;
    for (i = 1; i <= 9; ++i) {
        gotoxy(x, y);
        printf("%2d ", i);
        x += 3;
    }

    x = 7, y = 6;
    for (i = 1; i <= 9; ++i) {
        gotoxy(x, y);
        printf("%2d ", i);
        y++;
    }

    x = 9, y = 6;
    for (i = 1; i <= 9; ++i) {
        for (j = 1; j <= 9; ++j) {
            gotoxy(x, y);
            printf("%2d ", i * j);
            y++;
        }

        y -= 9;
        x += 3;
    }

    printf("\n\n");

    system('Pause');

}