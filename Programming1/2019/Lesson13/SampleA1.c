// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int x;
    char a[5], b[5];
    x = 10;

    printf("aを入力してください。\n");
    fgets(b, sizeof(b), stdin);
    sscanf(b, "%s", a);

    printf("xの値は, %d\n", x);

    return 0;
}
