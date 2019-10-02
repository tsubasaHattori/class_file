#include <stdio.h>
#include<math.h>

int main(void)
{
    int num1;
    double volume, surface;

    printf("球の体積と表面積を計算します.\n");
    printf("半径を入力してください.\n");
    scanf("%d", &num1);

    volume = 4 / 3 * M_PI * num1 * num1 * num1;
    surface = 4 * M_PI * num1 * num1;

    printf("体積は %f です.\n", volume);
    printf("表面積は %f です.\n", surface);

    return 0;
}