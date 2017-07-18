// Created by BaoQiang at 2017/7/18 19:32

#include <stdio.h>

int main() {
    int password = 0, number = 0, price = 58, i = 0;
    printf("\n===This is a Number Guess Game!===\n");
    while (password != 1234) {
        if (i >= 3) {
            return -1;
        }
        i++;
        puts("Please input password: ");
        scanf("%d", &password);
    }

    i = 0;
    while (number != price) {
        do {
            puts("Please input a number between 1 and 100:");
            scanf("%d", &number);
            printf("Your number is %d\n", number);
        } while (!(number >= 1 && number <= 100));

        if (number >= 90) {
            printf("Too bigger! Press any key to try again!\n");
        } else if (number >= 70 && number < 90) {
            printf("Bigger!\n");
        } else if (number >= 1 && number <= 30) {
            printf("Too Small! Press any key to try again!\n");
        } else if (number > 30 && number <= 50) {
            printf("Small! Press any key to try again!\n");
        } else {
            if (number == price) {
                printf("OK! You are right! Bye Bye!\n");
            } else if (number < price) {
                printf("Sorry,Only a little smaller! Press any key to try again!\n");

            }
            else if (number > price) {
                printf(" Sorry, Only a little bigger! Press any key to try again!\n");
            }
        }
    }
    getchar();
}