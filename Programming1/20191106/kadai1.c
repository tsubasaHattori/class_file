// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

double x_plus_y(double x, double y) {
    
    printf("仮引数xのアドレス:%p\n", &x);
    printf("仮引数yのアドレス:%p\n", &y);
    
    return x+y;
}

int main(void)
{
    double x, y;
    
    x = y = 0.5;
    
    printf("実引数xのアドレス:%p\n", &x);
    printf("実引数yのアドレス:%p\n", &y);
    printf("%f\n", x_plus_y(x, y));

    return 0;
}
