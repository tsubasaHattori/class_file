// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    double b;
    double *pB;

    b = 6.4;
    pB = &b;

    printf("変数bの値は%fです。\n", b);

    *pB = 8.1;

    printf("*pBに8.1を代入しました。\n");
    printf("変数bの値は%fです。\n", b);

    return 0;
}
