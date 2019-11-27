// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

#define NUM 100
#define COE 4.0

int main(void)
{
    FILE *fp;
    int i;
    double seq[NUM];

    seq[0] = 0.1;

    fp = fopen("logisticmap.dat", "w");

    if (fp == NULL) {
        printf("ファイルをオープンできませんでした。\n");
        return 1;
    } else {
        printf("ファイルをオープンしました。\n");
    }

    for (i=0; i<NUM-1; i++) {
        fprintf(fp, "%f\n", seq[i]);
        seq[i+1] = COE * seq[i] * (1 - seq[i]);
    }
    fprintf(fp, "%f\n", seq[NUM-1]);

    fclose(fp);
    printf("ファイルをクローズしました。\n");

    return 0;
}
