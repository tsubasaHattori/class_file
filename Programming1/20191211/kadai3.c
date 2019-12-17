// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COE 4.0

int main(int argc, char *argv[])
{
    int i;
    double *seq;
    int num = 1000;

    for (i=1; i<argc; i++) {
        if (strcmp(argv[i], "-n") == 0 && i+1 < argc) {
            num = atoi(argv[++i]);
        }
    }

    if (num <= 0) {
        printf("-n　の実行時オプションには非負整数を指定してください。\n");
                
        return 1;
    }

    seq = (double *)malloc(sizeof(double) * (num+1));
    seq[0] = 0.1;

    for (i=1; i<=num; i++) {
        seq[i] = COE * seq[i-1] * (1 - seq[i-1]);
        printf("a%d = %f\n", i, seq[i]);
    }

    printf("正常に終了しました。\n");

    return 0;
}