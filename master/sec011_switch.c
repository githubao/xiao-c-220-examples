// Created by BaoQiang at 2017/7/18 20:13

#include <stdio.h>

void chaxun(int overage) {
    printf("current overage: %d\n", overage);
}

int qukuan(int overage) {
    int a, b;
    printf("to Get：\n");
    scanf("%d", &a);
    b = overage - a;
    if (b < 0)
        printf("not enough\n");
    else {
        printf("Get money: %d\n", a);
        overage = overage - a;
    }
    return overage;
}

int xiugai(int password) {
    int b, c = 1, d, e = 1;
    while (e) {
        printf("Please input origin password: ");
        scanf("%d", &d);
        if (d == password) {
            e = 0;
        } else {
            printf("incorrect password, Try again");
        }
    }

    while (c) {
        printf("new Password: ");
        scanf("%d", &password);
        printf("\nnew Password again: ");
        scanf("%d", &b);

        if (password == b) {
            c = 0;
            printf("\nsucceed\n");
        } else {
            printf("\nun match, try again");
        }
    }
    return password;
}

int cunkuan(int overage) {
    int k;
    printf("to Save: \n");
    scanf("%d", &k);
    if (k < 0)
        printf("err money\n");
    else {
        printf("Save money: %d\n", k);
        overage = overage + k;
    }
    return overage;
}

int quka() {
    printf("bye");
}


int main() {
    int b = 1, c, j, k;
    int account = 1234, password = 4321, overage = 1000;
    while (b == 1) {
        printf("account: ");
        scanf("%d", &j);
        printf("password: ");
        scanf("%d", &k);

        if (j == account && k == password) {
            printf("current overage: %d\n", overage);
            b = 0;
        } else {
            printf("incorrect account or password, Please Try again\n");
        }
    }
    do {
        printf("1: check overage\n");
        printf("2: get money\n");
        printf("3: save money\n");
        printf("4: change password\n");
        printf("5: exit\n");

        scanf("%d", &c);
        switch (c) {
            case 1:
                chaxun(overage);
                break;
            case 2:
                overage = qukuan(overage);
                break;
            case 3:
                overage = cunkuan(overage);
                break;
            case 4:
                password = xiugai(password);
                break;
            case 5:
                quka();
                break;
        }

    } while (c != 5);
}