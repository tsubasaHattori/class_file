// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a, b; 

    printf("大小比較したい２つの整数を入力してください。\n");
    scanf("%d %d", &a, &b);

    switch (a > b){
        case 1:
            printf("%d は %d よりも大きいです。\n", a, b);
            break;
        case 0:
            printf("%d は %d よりも大きいです。\n", b, a);
            break;
    }

    return 0;
}
