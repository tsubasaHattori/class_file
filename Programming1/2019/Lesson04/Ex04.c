#include <stdio.h>

int main(void)
{
    int base, height;
    double result;

    printf("底辺の値を入力してください。\n");
    scanf("%d", &base);
    
    printf("高さの値を入力してください。\n");
    scanf("%d", &height);

    result = (double)base * height / 2;

    printf("面積は%fです。\n", result);

    return 0;
}