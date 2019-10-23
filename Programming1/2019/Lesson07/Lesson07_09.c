// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    char str[100];
    int degree[26] = {0};
    int i, s;

    printf("文字列を入力してください。\n");
    scanf("%s", str);

    for (i=0; str[i]!='\0'; i++) {
        degree[str[i] % 97]++;
    }

    for (s=0;s<=25; s++) {
        printf("%cは%d個あります。\n", 0x61+s, degree[s]);
    }
    
    return 0;
}
