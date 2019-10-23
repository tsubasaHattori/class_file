// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int num[10]; 
    int i;

    printf("整数を10個入力してください。\n");

    for (i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    for (i=9; i>=0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
