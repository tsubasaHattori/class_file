#include <stdio.h>

int main(void)
{
    int a, b, c, i;
    int hiku, kakeru, amari, and, or, xor, l_shift, r_shift; 
    double waru;
    // int result[] = {hiku, kakeru, waru, amari, and, or, xor, l_shift, r_shift};

    printf("1番目の整数を入力してください。\n");
    scanf("%d", &a);
    hiku = a;
    kakeru = a;
    waru = (double)a;
    amari = a;
    and = a;
    or = a;
    xor = a;
    l_shift = a;
    r_shift = a;

    printf("2番目の整数を入力してください。\n");
    scanf("%d", &b);
    hiku -= b;
    kakeru *= b;
    waru /= (double)b;
    amari %= b;
    and &= b;
    or |= b;
    xor ^= b;
    l_shift <<= b;
    r_shift >>= b;

    printf("減算:%d\n", hiku);
    printf("乗算:%d\n", kakeru);
    printf("除算:%f\n", waru);
    printf("剰余:%d\n", amari);
    printf("論理積:%d\n", and);
    printf("論理和:%d\n", or);
    printf("排他的論理和:%d\n", xor);
    printf("左シフト:%d\n", l_shift);
    printf("右シフト:%d\n", r_shift);

    return 0;
}