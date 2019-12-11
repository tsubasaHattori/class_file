// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    int size, element, sum = 0;
    int *list;

    for (i=1; i<argc; i++) {
        if (strcmp(argv[i], "-n") == 0 && i+1 < argc) {
            size = atoi(argv[++i]);
        }
    }

    list = (int *)malloc(sizeof(int) * size);
    if (!list) {
        printf("メモリが確保できませんでした。\n");

        return 1;
    }

    printf("整数配列の要素を%d個、標準入力から与えてください。\n\n", size);

    for (i=0; i<size; i++) {
        scanf("%d", &element);
        list[i] = element;
        sum += element;
    }

    printf("総和は、%dです。\n", sum);

    return 0;
}
