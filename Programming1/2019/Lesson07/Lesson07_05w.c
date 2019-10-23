// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
int main(void)
{
    int num[10000]; 
    int i = 0;
    int sum = 0;
    int max = 0, min = 10000;

    printf("人数分のテストの点数を入力してください。\n（終了するには負の数を入力してください。)\n");

    while(1) {
        scanf("%d", &num[i]);
        if (num[i] < 0) {
            break;
        }
        sum += num[i];
        if (num[i] > max) {
            max = num[i];
        } 
        if (num[i] < min && num[i] >= 0) {
            min = num[i];
        }
        i++;
    }

    printf("人数：%d　最高点：%d　最低点：%d　平均点：%f\n", i, max, min, sum/(double)i);

    return 0;
}
