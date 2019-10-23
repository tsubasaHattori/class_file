// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#define NUM 15
int main(void)
{
    int num[NUM]; 
    int i;
    int sum = 0;
    int max = 0, min = 10000;

    printf("%d人分のテストの点数を入力してください。\n", NUM);

    for (i=0; i<NUM; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
        if (num[i] > max) {
            max = num[i];
        } 
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("最高点：%d　最低点：%d　平均点：%f\n", max, min, sum/(double)NUM);

    return 0;
}
