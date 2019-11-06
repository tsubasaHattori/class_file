// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int x = 50;
    int *y = NULL;
    int *p = NULL;

    p = &x;
    y = &x;
    *y = 100;

    printf("The answer is %d\n", *y**p);

    return 0;
}
