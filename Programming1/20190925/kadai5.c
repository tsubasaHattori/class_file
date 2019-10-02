#include <stdio.h>

int main(void)
{
    char ch1, ch2, ch3; 

    printf("アルファベットの 1番目の文字と 2番目の文字と 3番目の文字を入力してください。\n");

    ch1 = getchar();getchar();
    ch2 = getchar();getchar();
    ch3 = getchar();getchar();

    printf("アルファベットの1番目の文字は %c です。\n", ch1);
    printf("アルファベットの2番目の文字は %c です。\n", ch2);
    printf("アルファベットの3番目の文字は %c です。\n", ch3);

    return 0;
}