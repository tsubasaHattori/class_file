// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    char res1, res2;
    int age, sex, judge;

    printf("あなたは女性ですか？\nY または N で答えてください\n(小文字も可)\n");
    scanf("%c", &res1);


    printf("あなたは成人ですか？\nY または N で答えてください\n(小文字も可)\n");
    scanf("%c", &res2);
    scanf("%c", &res2);


    if (res1 == 'Y' || res1 == 'y') {
        sex = 0; //女性
    } else {
        sex = 1; //男性
    }

    if (res2 == 'Y' || res2 == 'y') {
        age = 2; //成人
    } else {
        age = 4; //未成年
    }

    judge = age + sex;

    switch (judge) {
        case 2:
            printf("あなたは成人の女性です。\n");
            break;
        case 4:
            printf("あなたは未成年の女性です。\n");
            break;
        case 3:
            printf("あなたは成人の男性です。\n");
            break;
        case 5:
            printf("あなたは未成年の男性です。\n");
            break;
        default:
            printf("正しく回答してください。\n");
    }


    return 0;
}
