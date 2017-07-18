// Created by BaoQiang at 2017/7/18 18:21

#include <stdio.h>

int main() {
//    43ab#
//33333 a b

    char ch, nch;
    int count;
    int i;

    printf("Please input a string with a # in the end.\n");
    scanf("%c", &ch);

    while (ch != '#') {
        if (ch >= '0' && ch <= '9') {
            count = ch - '0' + 1;
            scanf("%c", &nch);
            for (i = 0; i < count; ++i) {
                printf("%c", nch);
            }
        } else {
            printf("%c", ch);
        }
        printf(" ");
        scanf("%c", &ch);
    }
    printf("\n");

}