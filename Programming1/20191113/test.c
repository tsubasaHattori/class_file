// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

void print_array(void* *array) {
    int i;
    // int arary_length;

    // arary_length = sizeof(array) / sizeof(array[0]);

    for (i=0; i<6; i++) {
        // printf("%lo\n", sizeof(array));
        // printf("%lo\n", sizeof(array[2]));

        printf("%d\n", *(((int*)array)+i));
    }
}

int main(void)
{
    // char array_char[5] = {'h', 'e', 'l', 'l', 'o'};
    int array_int[4] = {-2, -1, 1, 2};
    // unsigned int array_uint[3] = {1, 2, 3};

    // print_array(array_char);
    // printf("----\n");
    print_array((void*)array_int);
    // printf("----\n");
    // print_array(array_uint);

    return 0;
}
