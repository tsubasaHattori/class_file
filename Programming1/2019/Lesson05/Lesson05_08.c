// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res;
    char ans;

    printf("何番目を選びますか？\n");
    printf("整数を入力してください。\n");

    scanf("%d", &res);

    if (res == 1) {
        ans = 'A';
    } else {
        ans = 'B';
    }
    // ans = (res==1) ? 'A' : 'B'; 

    printf("%cコースを選択しました。\n", ans);

    return 0;
    }
