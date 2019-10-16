// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 
    int i;

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    printf("%d 以下の3の倍数を出力します。\n", res);

    for (i=3; i<=res; i+=3) {
         printf("%d\n", i);       
    }

    return 0;
}