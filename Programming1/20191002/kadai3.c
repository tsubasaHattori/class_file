#include <stdio.h>

int main(void)
{
    int y, m, d;
    int birthday, today, age;

    printf("生まれた年を入力してください：\n");
    scanf("%d", &y);
    
    printf("生まれた月を入力してください：\n");
    scanf("%d", &m);
    
    printf("生まれた日を入力してください：\n");
    scanf("%d", &d);

    birthday = y*10000 + m*100 + d;
    today = 20191002;

    age = (today - birthday) / 10000;

    printf("%d 年 %d 月 %d 日生まれの人は %d 歳です\n", y, m, d, age);

    return 0;
}