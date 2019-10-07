#include <stdio.h>

int main(void)
{
    unsigned short int x;
    unsigned short int mask;
    int counter = 0;
    // int i;

    printf("正の10進数を入力してください:");
    scanf("%hd", &x);
    printf("%d を2進数で表した時に各ビットに含まれる1の個数は", x);

    mask = 0x0001;

    counter += (x >> 15) & mask;
    counter += (x >> 14) & mask;
    counter += (x >> 13) & mask;
    counter += (x >> 12) & mask;
    counter += (x >> 11) & mask;
    counter += (x >> 10) & mask;
    counter += (x >> 9) & mask;
    counter += (x >> 8) & mask;
    counter += (x >> 7) & mask;
    counter += (x >> 6) & mask;
    counter += (x >> 5) & mask;
    counter += (x >> 4) & mask;
    counter += (x >> 3) & mask;
    counter += (x >> 2) & mask;
    counter += (x >> 1) & mask;
    counter += (x >> 0) & mask;
    
    // for (i = 15; i >= 0; i--){
    //     counter += (x >> i) & mask;
    // }
    
    printf(" %d 個です.\n", counter);

    return 0;
}