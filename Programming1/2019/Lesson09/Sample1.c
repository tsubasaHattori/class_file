// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;

    printf("変数aの値は%dです。\n", a);
    printf("変数aのアドレスは%pです。\n", &a);

    printf("変数bの値は%dです。\n", b);
    printf("変数bのアドレスは%pです。\n", &b);

    printf("変数cの値は%dです。\n", c);
    printf("変数cのアドレスは%pです。\n", &c);
   
    return 0;
}
