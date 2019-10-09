// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    double x, y;

    x = 0.15 + 0.15;
    y = 0.1 + 0.2;

    if (x == y) {
        printf("%.2f と %.2f は等しいです。\n", x, y);
    } else {
        printf("%.2f と %.2f は異なります。\n", x, y);
    }

    return 0;
}
