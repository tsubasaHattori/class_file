#include <stdio.h>

int main(void)
{
    float num;

    printf("小数を入力してください。\n");

    scanf("%lf", &num);

    printf("%fが入力されました。\n", num);

    return 0;
}