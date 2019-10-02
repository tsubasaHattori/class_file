#include <stdio.h>

int main(void)
{
    double num;

    printf("小数を入力してください。\n");

    scanf("%f", &num);

    printf("%fが入力されました。\n", num);

    return 0;
}