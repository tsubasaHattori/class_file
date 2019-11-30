// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 3

int factorial(int num) {
    int i;
    int result = 1;
   
    for (i=1; i<=num; i++) {
        result *= i;
    }
   
    return result;
}

void get_coefficients(int argc, char *argv[], double *alpha, double *a) {
    int i, j;
    char cmp[4][4] = {"-a0\0", "-a1\0", "-a2\0", "-a3\0"};

    if (argc != (N+1)*2 + 3) {
        printf("引数が足りません。\n");
        exit(0);
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

double function(double alpha, double co[]) {
    double result;
    result = ( ( co[0] * alpha + co[1] ) * alpha + co[2] ) * alpha + co[3];

    return result;
}

double differentiation(double alpha, double a[], int count) {
    int i, j;
    int length;
    double b[N+1][N+1] = {{a[0], a[1], a[2], a[3]}, };

    length = N+1; 

    for(j=1; j<=count; j++) {
        b[j][j] = b[j-1][j-1];
        for (i=j+1; i<N+1; i++) {
            b[j][i] = b[j][i-1] * alpha + b[j-1][i-1];
        }
    }

    return factorial(count) * function(alpha, b[count]);
}

int main(int argc, char **argv)
{
    int i;
    double alpha = 0;
    double a[N+1] = {0,};

    get_coefficients(argc, argv, &alpha, a);

    printf("alpha = %.2f,   f(alpha) = %.2f\n", alpha, function(alpha, a));

    printf("係数：\n");
    for (i=0; i<N+1; i++) {
        printf("  a[%d] = %.2f", i, a[i]);
    }
    printf("\n");

    printf("微分：\n");
    for (i=1; i<N+1; i++) {
        printf("  f%d(x) = %.2f", i, differentiation(alpha, a, i));
    }
    printf("\n");

    return 0;
}
