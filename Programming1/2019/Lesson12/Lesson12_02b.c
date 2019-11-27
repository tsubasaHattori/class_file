// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

#define NUM 100

void stat(double data[], double *avg, double *var) {
    int i;
    double sum = 0;
    double sqsum = 0;
    double sqavg;

    for (i=0; i<NUM; i++) {
        sum += data[i];
        sqsum += data[i] * data[i];
    }
        *avg = sum / NUM;
        sqavg =  sqsum/ NUM;
        *var = sqavg - *avg**avg;
}

int main(void)
{
    int i;
    double seq[NUM];
    double avg, var;

    for (i=0; i<NUM; i++) {
        fscanf(stdin, "%lf\n", &seq[i]);
    }

    stat(seq, &avg, &var);

    printf("平均値：%f\n", avg);
    printf("分散値：%f\n", var);

    return 0;
}
