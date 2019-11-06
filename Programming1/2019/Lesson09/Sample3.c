// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a = 8;
    int *pA;
    double b = -2.2;
    double *pB;

    pA = &a;
    pB = &b;

    printf("変数aの値は%dです。\n", a);
    printf("変数aのアドレスは%pです。\n", &a);
    printf("ポインタpAの値は%pです。\n", pA);
    printf("*pAの値は%dです。\n", *pA);

    printf("変数bの値は%fです。\n", b);
    printf("変数bのアドレスは%pです。\n", &b);
    printf("ポインタpBの値は%pです。\n", pB);
    printf("*pBの値は%fです。\n", *pB);

    return 0;
}
