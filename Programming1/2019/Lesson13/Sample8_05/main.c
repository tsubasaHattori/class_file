// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int power(int x, int y);

int main(void)
{
    int num1, num2, result;

    printf("整数を入力してください。\n");
    scanf("%d", &num1);

    printf("もう一つ整数を入力してください。\n");
    scanf("%d", &num2);

    result = power(num1, num2);
    printf("%dの%d乗は%dです。\n", num1, num2, result);

    return 0;
}
