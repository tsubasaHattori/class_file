// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    char str[] = "Hello";
    int i = 0;

    printf("Hello\n") ;

    while (str[i]!='\0') {
        printf("%c*", str[i]);
        i++;
    }

    printf("\n") ;

    return 0;
}