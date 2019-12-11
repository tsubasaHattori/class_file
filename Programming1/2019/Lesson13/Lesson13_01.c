// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int size, element, sum = 0;
    int *list;

    printf("整数を入力してください。\n");
    scanf("%d", &size);

    list = (int *)malloc(sizeof(int) * size);
    if (!list) {
        printf("メモリが確保できませんでした。\n");

        return 1;
    }

    printf("サイズが%dの配列を確保しました。\n", size);
    printf("配列の要素を、標準入力から入力してください。\n");

    for (i=0; i<size; i++) {
        scanf("%d", &element);
        list[i] = element;
        sum += element;
    }

    printf("総和は、%dです。\n", sum);

    return 0;
}
