#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4;

    printf("整数1を入力してください。\n");

    scanf("%d", &num1);

    printf("整数2を入力してください。\n");
    
    scanf("%d", &num2);

    printf("整数3を入力してください。\n");

    scanf("%d", &num3);

    printf("整数4を入力してください。\n");

    scanf("%d", &num4);

    printf("4つの整数の和は%d、積は%dです。\n", num1+num2+num3+num4, num1*num2*num3*num4);

    return 0;
}