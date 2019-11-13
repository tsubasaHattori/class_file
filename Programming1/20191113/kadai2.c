// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

#define ARRAY_SIZE (5)

int main(void)
{
    int i;
    char array_char[ARRAY_SIZE] = {'v', 'w', 'x', 'y', 'z'};
    int array_int[ARRAY_SIZE] = {10, 9, 8, 7, 6};

    char *pointer_char;
    int *pointer_int;

    pointer_char = array_int;
    pointer_int = array_char;

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("pointer_char は %p を指しており, 値は'%c' です.\n", pointer_char+i, *(pointer_char+i));
    }

    for (i=0; i<ARRAY_SIZE; i++) {
        printf("pointer_int は %p を指しており, 値は'%d' です.\n", pointer_int+i, *(pointer_int+i));
    }    

    return 0;
}


// Warning: assignment from incompatible pointer type
// アドレスの値の変化量は、変更前と同様にpointer_charでは1ずつ、pointer_intでは4ずつ増加した。
// これはそれぞれのポインタがchar型、int型であり、アドレスの変化量はポインタの型に起因しているためと考えられる。