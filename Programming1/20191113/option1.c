// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

void print_array(int *array) {
    int i;

    for (i=0; i<10; i++) {
        printf("%d\n", *(array+i));
    }
}

int main(void)
{
    // char array_char[5] = {'h', 'e', 'l', 'l', 'o'};
    int array_int[4] = {-2, -1, 1, 2};
    // unsigned int array_uint[3] = {1, 2, 3};

    // print_array(array_char);
    // printf("----\n");
    print_array(array_int);
    // printf("----\n");
    // print_array(array_uint);

    return 0;
}
