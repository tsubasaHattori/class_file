#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("整数を入力してください。\n");
    scanf("%d", &a);

    b = a++;
    c = +a;

    printf("後置インクリメント:%d\n前置インクリメント%d\n", b, c);

    return 0;
}