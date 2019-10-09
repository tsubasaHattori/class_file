// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a, b, result; 

    printf("2つの整数を入力してください。\n");
    scanf("%d", &a);
    scanf("%d", &b);

    result = a * b;

    if (result < 0) {
        printf("%d と %d は異符号です。\n", a, b);
    } else if (result > 0) {  
        printf("%d と %d は同符号です。\n", a, b);
    } else if (result == 0) {  
        printf("0が入力されました。\n");
    }

    return 0;
}
