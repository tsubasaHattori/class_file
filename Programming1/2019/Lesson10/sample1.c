// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int test[5] = {80, 60, 55, 22, 75};
    
    printf("0[test]の値は%dです。\n", 0[test]);
    printf("0[test]のアドレスは%pです。\n", &0[test]);
    printf("1[test]の値は%dです。\n", 1[test]);
    printf("1[test]のアドレスは%pです。\n", &1[test]);

    return 0;
}
