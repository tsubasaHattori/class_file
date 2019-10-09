// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    if (res == 1) {
        printf("1が入力されました。\n");
        printf("2が入力されました。\n");
        printf("4が入力されました。\n");
        printf("5が入力されました。\n");
        printf("1か2か4か5を入力してください。\n");
    } else if (res == 2) {
        printf("2が入力されました。\n");
        printf("4が入力されました。\n");
        printf("5が入力されました。\n");
        printf("1か2か4か5を入力してください。\n");
    } else if (res == 4) {
        printf("4が入力されました。\n");
        printf("5が入力されました。\n");
        printf("1か2か4か5を入力してください。\n");
    } else if (res == 5) {
        printf("5が入力されました。\n");
        printf("1か2か4か5を入力してください。\n");
    } else {
        printf("1か2か4か5を入力してください。\n");
    }

    return 0;
}
