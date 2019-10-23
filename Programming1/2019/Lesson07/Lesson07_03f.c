// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int test[5] = {80, 60, 22, 50, 75}; 
    int i;

    for (i=0; i<10000; i++) {
        printf("%d番目の人の点数は%dです。\n", i+1, test[i]);
    }


    return 0;
}
