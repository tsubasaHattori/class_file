#include <stdio.h>

int main(void)
{
    int x = 10 , y = 8;

    printf("%d / %d = %f\n", x, y, (double)x/y);

    x = 7; y = 4;

    printf("%d / %d = %f\n", x, y, (double)x/y);


    return 0;
}