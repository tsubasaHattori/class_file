#include <stdio.h>

int main(void)
{
    int nature; 

    printf("自然数を入力してください。\n");

    scanf("%d", &nature);

    printf("%d は 16 進数では　%x です。\n", nature, nature);
    printf("%d は 8 進数では　%o です。\n", nature, nature);

    return 0;
}