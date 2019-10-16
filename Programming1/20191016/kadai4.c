// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    unsigned int seed;
    int n;
    int res;

    printf("乱数の種を入力してください。:");
    scanf("%u", &seed);

    srand(seed);
    
    do {
        printf("何回サイコロを振りますか？:");
        scanf("%d", &n);
        
        printf("サイコロを%d回降ります。\n", n);
        for (i=0; i<n; i++) {
            printf("　%d ", rand()%6+1);       
        }
        printf("\n");
        printf("もう一度サイコロを振りますか？ (Yes: 1, No: 0):");
        scanf("%d", &res);
    } while (res == 1);

    return 0;
}