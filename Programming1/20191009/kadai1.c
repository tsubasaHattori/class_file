// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a, b; 

    printf("大小比較したい２つの整数を入力してください。\n");
    scanf("%d %d", &a, &b);

    if (a > b){
        printf("%d は %d よりも大きいです。\n", a, b);
    } else {
        printf("%d は %d よりも大きいです。\n", b, a);
    }

    return 0;
}
