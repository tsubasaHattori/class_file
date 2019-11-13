// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int i, j;
    int *p=&i;

    printf("p == &i -> %d\n", p == &i);
    printf("p == &j -> %d\n", p == &j);

    return 0;
}
