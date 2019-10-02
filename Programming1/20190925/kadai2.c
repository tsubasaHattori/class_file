#include <stdio.h>

int main(void)
{
    int age; 

    printf("年齢を入力してください。\n");

    scanf("%d", &age);

    printf("あなたは %d 歳です。\n", age);

    return 0;
}