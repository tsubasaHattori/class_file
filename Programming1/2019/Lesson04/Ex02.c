#include <stdio.h>

int main(void)
{
    char ch1;

    printf("アルファベットを入れてください.\n");

    scanf("%c", &ch1);

    printf("アルファベット %c の大文字は %c で,\nアスキーコード値は10進数で%d, 16進数で%xです.\n", ch1, ch1-0x20, ch1-0x20, ch1-0x20);

    return 0;
}