// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 

    printf("成績を入力してください。\n");
    scanf("%d", &res);

    switch(res){
        case 1:
            printf("成績は1です。もっとがんばりましょう。\n");
            break;
        case 2:
            printf("成績は2です。もう少しがんばりましょう\n");
            break;
        case 3:
            printf("成績は3です。さらに上をめざしましょう\n");
            break;
        case 4:
            printf("成績は4です。たいへんよくできました。\n");
            break;
        case 5:
            printf("成績は5です。たいへん優秀です。\n");
            break;
        default:
            break;
    }

    return 0;
}
