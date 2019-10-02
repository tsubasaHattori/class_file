#include <stdio.h>

int main(void)
{
    float napier; 

    printf("ネイピア数の値はいくつですか？\n");

    scanf("%f", &napier);

    printf("ネイピア数は %8.6f です。\n", napier);

    return 0;
}