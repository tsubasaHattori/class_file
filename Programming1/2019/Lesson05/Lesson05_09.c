// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 

    printf("成績を入力してください。\n");
    scanf("%d", &res);

    if (res == 1) {
        printf("成績は1です。もっとがんばりましょう。\n");
    } else if (res == 2) {  
        printf("成績は2です。もう少しがんばりましょう\n");
    } else if (res == 3) {  
        printf("成績は3です。さらに上をめざしましょう\n");
    } else if (res == 4) {  
        printf("成績は4です。たいへんよくできました。\n");
    } else if (res == 5) {  
        printf("成績は5です。たいへん優秀です。\n");
    }

    return 0;
}
