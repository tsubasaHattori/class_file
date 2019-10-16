// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int i, j;

    for (i=1; i<=9; i++) {
        printf("%d の段: ", i);

        for (j=1; j<=9; j++) {
            printf(" %d× %d = %2d ", i, j, i*j);
        }
        printf("\n");       
    }

    return 0;
}