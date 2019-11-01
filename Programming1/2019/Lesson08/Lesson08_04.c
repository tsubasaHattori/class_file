// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int quadratic(int num)
{
    return num*num;
}

int cubic(int num)
{
    return num*num*num;
}

int biquadratic(int num)
{
    return num*num*num*num;
}

int main(void)
{
    int num, qu, cu, biqu;

    printf("整数を入力してください。\n");
    scanf("%d", &num);

    qu = quadratic(num);
    cu = cubic(num);
    biqu = biquadratic(num);
    printf("%dの2乗は%d、3乗は%d、4乗は%dです。\n", num, qu, cu, biqu);

    return 0;
}
