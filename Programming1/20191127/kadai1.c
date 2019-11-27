// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double x;

    x = 0;
    if (argc == 3 && strcmp(argv[1], "-x") == 0) {
        x = atof(argv[2]);
        printf("x = %f\n", x);
    } else {
        printf("error!\n");
    }

    return 0;
}
