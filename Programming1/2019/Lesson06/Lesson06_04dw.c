// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int num = 0, sum = 0;
    int i = 1;

    printf("いくつまでの合計を求めますか？\n");
    scanf("%d", &num);

    if (num == 0) {
        printf("1から0までの合計値は1です。\n");
        return 0;
    }

    do{
        sum += i;
        i++;
    } while (i != num+1);

    printf("1から%dまでの合計値は%dです。\n", num, sum);

    return 0;
}
