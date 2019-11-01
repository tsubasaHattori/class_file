// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int quadratic(int num)
{
    return num*num;
}

int main(void)
{
    int num, result;

    printf("整数を入力してください。\n");
    scanf("%d", &num);

    result = quadratic(num);
    printf("%dの2乗は%dです。\n", num, result);

    return 0;
}
