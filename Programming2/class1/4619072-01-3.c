// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double limit(double constant, double init);

int main (void)
{
    double constant;
    double init;
    double result;

    constant = 0.2;
    init = 0.1;

    result = limit(constant, init);

    return 0;
}

double limit(double constant, double init) {
    int i;
    double fn, fp, tmp;
    double limit;
    double diff;

    fp = init;
    limit = (1 - sqrt(1 - 4 * constant)) / (2 * constant) ;

    for (i=0; i<100000; i++) {
        fn = constant * fp * fp + 1;
        diff = fabs(fp - limit);
        if (diff < 0.000000000001) {
            break;
        }
        tmp = fp;
        fp = fn;
    }
    printf("極限: %f\n", tmp);
    printf("演繹的に求めた解: %f\n", limit);

    return 1;
}