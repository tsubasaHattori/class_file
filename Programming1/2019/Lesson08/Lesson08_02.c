// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

void multi(double x, double y, double z)
{
    printf("積は、%fです。\n", x*y*z);
}

int main(void)
{
    double num[3];
    int i;

    for (i=0; i<3; i++) {
        printf("実数を入力してください。\n");
        scanf("%lf", &num[i]);
    }

    multi(num[0], num[1], num[2]);

    return 0;
}
