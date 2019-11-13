// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

void stat(int data[], int *sum, int *prod, double *avg, double *sqavg, double *var) {
    int i, sqsum=0;

    for (i=0; i<10; i++) {
        *sum += data[i];
        *prod *= data[i];
        sqsum += data[i] * data[i];
    }
        *avg = *sum / 10;
        *sqavg =  sqsum/ 10;
        *var = *sqavg - *avg**avg;
}

int main(void)
{
    int n[10];
    int s=0, p=1;
    double a, qa, v; 
    int i;

    printf("%d個の整数を入力してください。\n", 10);
    for (i=0; i<10; i++) {
        scanf("%d", &n[i]);
    }

    stat(n, &s, &p, &a, &qa, &v);

    printf("和：%d\n", s);
    printf("積：%d\n", p);
    printf("平均：%f\n", a);
    printf("二乗平均：%f\n", qa);
    printf("分散：%f\n", v);

    return 0;
}
