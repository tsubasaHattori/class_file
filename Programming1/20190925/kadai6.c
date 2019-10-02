#include <stdio.h>

int main(void)
{
    char ch;
    float fnum;
    int inum;

    printf("アルファベットか数字を1文字入力してください。\n");
    ch = getchar();getchar();

    printf("小数を入力してください。\n");
    scanf("%f", &fnum);

    printf("整数を入力してください。\n");
    scanf("%d", &inum);

    printf("入力された情報:\n", ch);
    printf("%c\n", ch);
    printf("%f\n", fnum);
    printf("%d\n", inum);

    return 0;
}