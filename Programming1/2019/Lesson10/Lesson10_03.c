// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int v[10], *p = v;

    printf("(1)\n");
    printf("p == v     -> %d\n", p == v);
    printf("p == &v[0] -> %d\n", p == &v[0]);
    printf("p == &v[1] -> %d\n", p == &v[1]);
    printf("p == &v[2] -> %d\n", p == &v[2]);

    p = v + 2;

    printf("(2)\n");
    printf("p == v     -> %d\n", p == v);
    printf("p == &v[0] -> %d\n", p == &v[0]);
    printf("p == &v[1] -> %d\n", p == &v[1]);
    printf("p == &v[2] -> %d\n", p == &v[2]);

    p--;

    printf("(3)\n");
    printf("p == v     -> %d\n", p == v);
    printf("p == &v[0] -> %d\n", p == &v[0]);
    printf("p == &v[1] -> %d\n", p == &v[1]);
    printf("p == &v[2] -> %d\n", p == &v[2]);

    return 0;
}
