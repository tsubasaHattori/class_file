// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int a, b; 

    printf("2つの整数を入力してください。\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("%d と %d は同符号です。\n", a, b);
    } else if ((a < 0 && b > 0) || (a > 0 && b < 0)) {  
        printf("%d と %d は異符号です。\n", a, b);
    } else if (a == 0 || b == 0) {  
        printf("0が入力されました。\n");
    }

    return 0;
}
