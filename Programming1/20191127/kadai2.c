// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 3

void get_coefficients(int argc, char *argv, double *alpha, double *a) {
    int i, j;
    char cmp[4][3] = {"-a0", "-a1", "-a2", "-a3"};

    if (argc != (N+1)*2 + 3) {
        printf("引数が足りません。\n");
    } else {
        for (i=1; i<argc; i++) {
            for(j=0; j<4; j++) {
                if (strcmp(argv[i], cmp[j]) == 0 && i+1 < argc) {
                    *(a+j) = atof(argv[++i]);
                }
            }

            if (strcmp(argv[i], "-alpha") == 0 && i+1 < argc) {
                *alpha = atof(argv[++i]);
            }
        }
    }
}

double function(double alpha, double a[]) {
    double result;
    result = ( ( a[0] * alpha + a[1] ) * alpha + a[2] ) * alpha + a[3];

    return result;
}

int main(int argc, char *argv[])
{
    int i;
    double alpha = 0;
    double a[N+1] = {0,};

    get_coefficients(argc, *argv, &alpha, a);

    printf("係数：\n");
    for (i=0; i<N+1; i++) {
        printf("a[%d] = %f\n", i, a[i]);
    }
    printf("alpha = %f\n", alpha);

    printf("f(alpha) = %f\n", a[0]*alpha*alpha*alpha + a[1]*alpha*alpha * a[2]*alpha + a[3]);

    printf("f(alpha) = %f\n", function(alpha, a));

    return 0;
}
