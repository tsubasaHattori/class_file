#include <stdio.h>
#include<math.h>

int main(void)
{
    double num1;
    double volume, surface;

    printf("球の体積と表面積を計算します.\n");
    printf("半径を入力してください.\n");
    scanf("%lf", &num1);

    volume = (4 * M_PI * num1 * num1 * num1) / 3;
    surface = 4 * M_PI * num1 * num1;

    printf("体積は %f です.\n", volume);
    printf("表面積は %f です.\n", surface);
    printf("%f\n", M_PI);

    return 0;
}