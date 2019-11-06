// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

#define NUM 5



void stat(int d1, int d2, int d3, int d4, int d5, int *sum, int *prod, int *avg, int *sqavg, int *var) {
    *sum = d1 + d2 + d3 + d4 + d5;

    *prod = d1 * d2 * d3 * d4 * d5;

    *avg = *sum / NUM;

    *sqavg = (d1*d1 + d2*d2 + d3*d3 + d4*d4 + d5*d5) / NUM;

    *var = *sqavg - *avg**avg;
}

int main(void)
{
    int d1, d2, d3, d4, d5;
    int sum, prod, avg, sqavg, var; 

    printf("%d個の整数を入力してください。\n", NUM);
    scanf("%d", &d1);
    scanf("%d", &d2);
    scanf("%d", &d3);
    scanf("%d", &d4);
    scanf("%d", &d5);

    stat(d1, d2, d3, d4, d5, &sum, &prod, &avg, &sqavg, &var);

    printf("和：%d\n", sum);
    printf("積：%d\n", prod);
    printf("平均：%d\n", avg);
    printf("二乗平均：%d\n", sqavg);
    printf("分散：%d\n", var);

    return 0;
}
