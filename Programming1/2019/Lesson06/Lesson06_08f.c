// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 
    int i, j;

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    for (i=1; i<=res; i++){
        for (j=1; j<=i; j++) {
            if (j % 2 == 1) {
                printf("*");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    for (i=res-1; i>=1; i--){
        for (j=1; j<=i; j++) {
            if (j % 2 == 1) {
                printf("*");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}