// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    switch(res){
        case 1:
            printf("1が入力されました。\n");
            break;
        case 2:
            printf("2が入力されました。\n");
            break;
        case 3:
            printf("3が入力されました。\n");
            break;
        default:
            printf("1か2か3を入力してください。\n");
            break;
    }

    return 0;
}
