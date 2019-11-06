// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

#define ARRAY_SIZE (5)

int main(void)
{
    int i;
    char array_char[ARRAY_SIZE] = {'a', 'b', 'c', 'd', 'e'};
    short int array_short_int[ARRAY_SIZE] = {1,2,3,4,5};
    int array_int[ARRAY_SIZE] = {1,2,3,4,5};
    long int array_long_int[ARRAY_SIZE] = {1,2,3,4,5};
    float array_float[ARRAY_SIZE] = {1,2,3,4,5};
    double array_double[ARRAY_SIZE] = {1,2,3,4,5};

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("array_char[%d] のアドレスは %p です。\n", i, &array_char[i]);
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("array_short_int[%d] のアドレスは %p です。\n", i, &array_short_int[i]);
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("array_int[%d] のアドレスは %p です。\n", i, &array_int[i]);
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("array_long_int[%d] のアドレスは %p です。\n", i, &array_long_int[i]);
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("array_float[%d] のアドレスは %p です。\n", i, &array_float[i]);
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("array_double[%d] のアドレスは %p です。\n", i, &array_double[i]);
    }

    return 0;
}

// それぞれの型のサイズ分のメモリを確保するので。
// 16進数の一桁目が１バイト分に対応しサイズ分のアドレス差がでる。
