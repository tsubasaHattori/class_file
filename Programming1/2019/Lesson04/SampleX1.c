// 学籍番号：4619072 氏名：服部 翼
#include <stdio.h>

int main(void)
{
    int num1, num2, l_shift, r_shift;

    printf("整数を入力してください.\n");
    scanf("%d", &num1);
    
    printf("シフト値を入力してください.\n");
    scanf("%d", &num2);

    l_shift = num1<<num2;
    r_shift = num1>>num2;

    printf("左シフト：%d\n", l_shift);
    printf("右シフト：%d\n", r_shift);

    return 0;
}