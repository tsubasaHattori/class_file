// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include "main.h"

int main(void)
{
    int num1, num2, ans1, ans2;

    printf("一つ目の整数を入力してください。\n");
    scanf("%d", &num1);

    printf("二つ目の整数を入力してください。\n");
    scanf("%d", &num2);

    ans1 = sum1(num1, num2);
    ans2 = sum2(num1, num2);

    printf("和：%d\n", ans1);
    printf("二乗和：%d\n", ans2);

    return 0;
}