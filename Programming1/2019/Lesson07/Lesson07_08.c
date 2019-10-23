// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    char str[100]; 
    int i;
    int count = 0;

    printf("文字列を入力してください。\n");
    scanf("%s", str);

    for (i=0; str[i]!='\0'; i++) {
        if (str[i] == 'a') {
            count++;
            str[i] = 'b';
        }
    }

    printf("文字列の長さは%dです。\n", i);
    printf("文字列中の'a'の数は%dです。\n", count);
    printf("文字列中の'a'を'b'に置き換えると%sです。\n", str);

    return 0;
}
