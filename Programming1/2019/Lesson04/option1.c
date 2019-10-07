#include <stdio.h>

int main(void)
{
    unsigned short int x;
    unsigned short int mask;
    // int i;

    printf("正の10進数を入力してください:");
    scanf("%hd", &x);
    printf("%d は2進数で ", x);

    mask = 0x0001;

    printf("%d", (x >> 15) & mask);
    printf("%d", (x >> 14) & mask);
    printf("%d", (x >> 13) & mask);
    printf("%d", (x >> 12) & mask);
    printf("%d", (x >> 11) & mask);
    printf("%d", (x >> 10) & mask);
    printf("%d", (x >> 9) & mask);
    printf("%d", (x >> 8) & mask);
    printf("%d", (x >> 7) & mask);
    printf("%d", (x >> 6) & mask);
    printf("%d", (x >> 5) & mask);
    printf("%d", (x >> 4) & mask);
    printf("%d", (x >> 3) & mask);
    printf("%d", (x >> 2) & mask);
    printf("%d", (x >> 1) & mask);
    printf("%d", (x >> 0) & mask);

    // for (i = 15; i >= 0; i--){
    //     printf("%d", (x >> i) & mask);
    // }
    
    printf(" です.\n");

    return 0;
}