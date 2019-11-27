// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

#define NUM 100
#define COE 4.0

int main(void)
{
    int i;
    double seq[NUM];

    seq[0] = 0.1;

    for (i=0; i<NUM-1; i++) {
        fprintf(stdout, "%f\n", seq[i]);
        seq[i+1] = COE * seq[i] * (1 - seq[i]);
    }
    fprintf(stdout, "%f\n", seq[NUM-1]);

    printf("正常に終了しました。\n");

    return 0;
}
