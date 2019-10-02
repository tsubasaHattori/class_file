#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    int avg = 0;
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;

    printf("科目１~10の点数を入力してください\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);
    scanf("%d", &num6);
    scanf("%d", &num7);
    scanf("%d", &num8);
    scanf("%d", &num9);
    scanf("%d", &num10);
    
    sum = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    avg = sum / 10;

    printf("合計は%d、平均は%dです。\n", sum, avg);
    
    return 0;
}