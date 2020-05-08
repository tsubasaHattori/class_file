// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void square_list(int num_list[], int array_size);

int main (void)
{
    int i;
    int array_size = 5;
    int num_list[array_size];

    srand((unsigned)time(NULL));

    for (i=0; i<array_size; i++) {
        num_list[i] = rand() % 20 + 1;
    }

    printf("元の配列は、 ");
    for (i=0; i<array_size; i++) {
        printf("%d ", num_list[i]);
    }
    printf("\n");

    square_list(num_list, array_size);

    printf("二乗すると、 ");
    for (i=0; i<array_size; i++) {
        printf("%d ", num_list[i]);
    }
    printf("\n");

    return 0;
}

void square_list(int num_list[], int array_size) {
    int i;

    for (i=0; i<array_size; i++) {
        num_list[i] = num_list[i] * num_list[i];
    }
}