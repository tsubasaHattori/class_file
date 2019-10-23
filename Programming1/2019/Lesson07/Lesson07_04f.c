// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#define f_square(a) a*a
#define t_square(a) (a)*(a)

int main(void)
{
    int num = 5;

    printf("a=5\n");
    printf("square(a) a*a のとき、\n");
    printf("square(a+a) の結果は%dです。\n", f_square(num+num));
    printf("square(a) (a)*(a) のとき、\n");
    printf("square(a+a) の結果は%dです。\n", t_square(num+num));

    return 0;
}
