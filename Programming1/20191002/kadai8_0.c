#include <stdio.h>

int main(void)
{
    short int x = 31415;
    short int mask;

    printf("short 型は %lu バイト (%lu ビット)\n", sizeof(int), sizeof(int)*8);

    printf("3ビット目を取り出すと 0000000000000100 です。\n");
    mask = 0x0004;
    printf("10進数では %d です。 \n", mask & x);
    
    printf("5から8ビット目を取り出すと 0000000010110000 です。\n");
    mask = 0x00f0;
    printf("10進数では %d です。\n", mask & x);

    printf("2から6ビット目だけを取り出した場合、");
    mask = 0x003e;
    printf("10進数では %d です。\n", mask & x);

    return 0;
}