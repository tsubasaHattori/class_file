// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int x;

    x = 0;
    if (10 > 5 && (x=3)==3) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("x の値は %d\n\n", x);

    x = 0;
    if (10 < 5 && (x=3)==3) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("x の値は %d\n\n", x);

    return 0;
}
