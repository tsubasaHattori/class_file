// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int x = 50;
    int *p;

    p = &x;

    printf("The answer is %d.\n", 5**p);

    return 0;
}
