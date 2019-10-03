#include <stdio.h>

int main(void)
{
    int m;
    double v;

    printf("温州みかん1つあたりの重さ[g]を入力してください：\n");
    scanf("%lf", &v);

    printf("温州みかんの個数を入力してください：\n");
    scanf("%d", &m);

    printf("温州みかん1つあたりの重さは %.1f [g] です。：\n", v);
    printf("温州みかんの個数は %d [個] です。：\n", m);
    printf("%d個のみかんの重さは合計 %.1f [g] です。\n", m, m*v);
    
    return 0;
}