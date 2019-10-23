// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int num[5]; 
    int i;
    int count = 0;

    printf("5人分のテストの点数を入力してください。\n");

    for (i=0; i<5; i++) {
        scanf("%d", &num[i]);
        count += num[i] / 60; 
    }

    printf("60点以上の学生数は%d人です。\n", count);

    return 0;
}
