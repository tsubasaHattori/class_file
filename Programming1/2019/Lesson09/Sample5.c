// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a;
    int *pA;

    a = 5;
    pA = &a;

    printf("変数aの値は%dです。\n", a);

    *pA = 50;

    printf("*pAに50を代入しました。\n");
    printf("変数aの値は%dです。\n", a);

    return 0;
}
