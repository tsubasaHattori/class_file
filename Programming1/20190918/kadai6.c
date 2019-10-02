#include <stdio.h>

int main(void)
{
    printf("符号付で整数を表示します: %+d\n", 15);
    printf("符号付で整数を表示します: %+d\n", -15);
    printf("0 埋めで整数を表示します: %03d\n", 8);
    printf("0 埋めで整数を表示します: %05d\n", 8);
    printf("10 文字分の文字列を右詰めで表示します: %10s%10s\n", "Hello","World");
    printf("10 文字分の文字列を左詰めで表示します: %-10s%-10s\n", "Hello","World");

    return 0;
}