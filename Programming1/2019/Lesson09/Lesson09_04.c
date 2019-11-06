// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int x = 50, y =100;
    int *px, *py;

    px = &x;
    py = &y;

    printf("pxが指しているのは、%d\n", *px);
    printf("pyが指しているのは、%d\n", *py);

    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;

    printf("入れ替えたので...\n");
    printf("pxが指しているのは、%d\n", *px);
    printf("pyが指しているのは、%d\n", *py);

    return 0;
}
