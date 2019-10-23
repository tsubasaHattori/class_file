// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#define NUM 15
int main(void)
{
    int num[NUM];
    int degree[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0 ,0, 0};
    int i, j;

    printf("%d人分のテストの点数を入力してください。\n", NUM);

    for (i=0; i<NUM; i++) {
        scanf("%d", &num[i]);
        if (num[i] > 100 || num[i] <0) {
            printf("0～100の値を入力してください。\n");
            return 0;
        }
        degree[num[i] / 10]++;
    }

    for (j=0;j<10;j++) {
        printf("%2d～%2d:%d\n", j*10, j*10+9, degree[j]);
    }
    printf("   100:%d\n", degree[10]);

    return 0;
}
