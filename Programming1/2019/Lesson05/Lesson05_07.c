// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int res; 

    printf("整数を入力してください。\n");
    scanf("%d", &res);

    if (res % 3) {
        printf("%dを3で割ると、%d余ります。\n", res, res % 3);
    } else {
        printf("%dを3で割ると割り切れます。\n", res);
    }

    return 0;
}
