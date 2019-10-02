#include <stdio.h>

int main(void)
{
    double num1;

    printf("辺の値を入力してください。\n");
    scanf("%lf", &num1);

    printf("立方体の体積は%fです。\n", num1*num1*num1);

    return 0;
}