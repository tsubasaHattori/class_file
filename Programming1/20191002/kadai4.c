#include <stdio.h>

int main(void)
{
    double x = 10, y = 5;
    
    x /= y;

    printf("x = %f\n", x);

    x *= y;

    printf("x = %f\n", x);

    x += y;

    printf("x = %f\n", x);

    return 0;
}