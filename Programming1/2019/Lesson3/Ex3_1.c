#include <stdio.h>

int main(void)
{
    double height;
    float weight;
    int age;

    printf("身長(小数値）、体重（小数値）、年齢（整数値）を入力してください。\n");

    printf("身長(cm)：");
    scanf("%lf", &height);
    
    printf("体重(kg)：" );
    scanf("%f", &weight);
    
    printf("年齢(歳）：");
    scanf("%d", &age);

    printf("身長は%fセンチ、体重は%fキログラム、年齢は%d歳です。\n", height, weight, age);

    return 0;
}