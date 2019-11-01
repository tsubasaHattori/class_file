// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

void quadratic(int num)
{
    printf("%dの2乗は%dです。\n", num, num*num);
}

int main(void)
{
    int num;

    printf("整数を入力してください。\n");
    scanf("%d", &num);

    quadratic(num);

    return 0;
}
