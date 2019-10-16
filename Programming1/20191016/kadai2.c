// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int i, j, res;

    printf("整数を入力してください。\n");
    scanf("%d", &res);
    printf("#入力された整数は%dです。\n", res);

    printf("    |");
    for (i=res; i>=1; i--) {
        printf(" %2d ", i);
    }
    printf("\n");       

    for (i=1; i<=res*4+4; i++) {
        printf("-");
    }
    printf("\n"); 


    for (i=res; i>=1; i--) {
        printf("  %d |", i);
        for (j=res; j>=1; j--) {
            printf(" %2d ", i*j);
        }
        printf("\n");       
    }

    return 0;
}