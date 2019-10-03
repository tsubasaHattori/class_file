#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してください：\n");
    scanf("%d", &num);

    printf("1桁目の値は %d です。\n", num%10);

    return 0;
}