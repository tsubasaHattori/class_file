#include <stdio.h>

int main(void)
{
    double num1;

    printf("数値を入力してください。\n");
    scanf("%lf", &num1);

    printf("符号を反転すると%fです\n", num1*(-1));

    return 0;
}