// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int **test;
    int i;
    int sub, num;

    // printf("科目数を入力して下さい。\n");
    // scanf("%d", sub);
    // printf("人数を入力して下さい。\n");
    // scanf("%d", num);

    sub = 2;
    num = 5;

    test = (int **)malloc(sizeof(int *) * sub);
    for (i=0;i<sub;i++) {
        test[i] = (int *)malloc(sizeof(int) * num);
    }

    test[0][0] = 80;
    test[0][1] = 60;
    test[0][2] = 22;
    test[0][3] = 50;
    test[0][4] = 75;
    test[1][0] = 90;
    test[1][1] = 55;
    test[1][2] = 68;
    test[1][3] = 72;
    test[1][4] = 58;

    for (i=0; i<num; i++) {
        printf("%d番目の人の国語の点数は%dです。\n", i+1, test[0][i]);
        printf("%d番目の人の算数の点数は%dです。\n", i+1, test[1][i]);
    }

    return 0;
}