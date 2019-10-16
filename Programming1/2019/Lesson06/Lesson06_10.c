// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int i;

    printf("閏年を出力します。\n");

    for (i=4; i<=3000; i+=4) {
        if (i % 100 != 0 || i % 400 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}