// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    double a = 1.1, b = 3.2, c = 5.6;
    double *pA, *pB, *pC;
    float d = 2.4, e = 4.9, f = 6.3;
    float *pD, *pE, *pF;

    pA = &a;
    pB = &b;
    pC = &c;
    pD = &d;
    pE = &e;
    pF = &f;


    printf("変数aの値は%fです。\n", a);
    printf("変数aのアドレスは%pです。\n", pA);
    
    printf("変数bの値は%fです。\n", b);
    printf("変数bのアドレスは%pです。\n", pB);
    
    printf("変数cの値は%fです。\n", c);
    printf("変数cのアドレスは%pです。\n", pC);
    
    printf("変数eの値は%fです。\n", d);   
    printf("変数dのアドレスは%pです。\n", pD);
    
    printf("変数eの値は%fです。\n", e);
    printf("変数eのアドレスは%pです。\n", pE);
    
    printf("変数fの値は%fです。\n", f);
    printf("変数fのアドレスは%pです。\n", pF);

    return 0;
}
