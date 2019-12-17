// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int x;
    char a[5], b[5];
    x = 10;

    printf("x　　　のアドレスは　%p\n", &x);
    printf("aの先頭のアドレスは　%p\n", a);
    printf("aを入力してください。");
    
    fgets(b, sizeof(b), stdin);
    sscanf(b, "%s", a);

    printf("x　　　のアドレスは　%p\n", &x);
    printf("aの先頭のアドレスは　%p\n", a);
    printf("xの値は, %d\n", x);

    return 0;
}
