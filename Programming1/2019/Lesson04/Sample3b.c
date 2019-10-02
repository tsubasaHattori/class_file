#include <stdio.h>

int main(void)
{
    double num1, num2, num3, num4;

    printf("小数1を入力してください。\n");

    scanf("%lf", &num1);

    printf("小数2を入力してください。\n");
    
    scanf("%lf", &num2);

    printf("2つの小数の和は%f、差（1番目の小数 - 2番目の小数）は%f\n積は%f、商(１番目の小数 ÷ 2番目の小数）は%fです。\n", num1+num2, num1-num2, num1*num2, num1/num2);

    return 0;
}