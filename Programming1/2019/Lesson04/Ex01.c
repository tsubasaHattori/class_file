#include <stdio.h>

int main(void)
{
    char ch1;

    printf("アルファベットを入れてください.\n");

    scanf("%c", &ch1);

    printf("アルファベット %c のアスキーコードは,\n10進数で%d, 16進数で%xです.\n", ch1, ch1, ch1);

    return 0;
}