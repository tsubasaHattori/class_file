// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    if (res == 1) {
        printf("1が入力されました。\n");
    } else if (res == 2) {
        printf("2が入力されました。\n");
    } else if (res == 3) {
        printf("3が入力されました。\n");
    } else {
        printf("1か2か3を入力してください。\n");
    }

    return 0;
}
