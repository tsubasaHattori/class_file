// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main (void)
{
    int year = 0;
    int month = 0;
    int max_day;
    int max_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (year < 1600) {
        printf("西暦を入力して下さい。(1600年~)\n");
        scanf("%d", &year);

        if (year < 1600) {
            printf("1600~ の整数を入力してください。\n");
        }
    }
    
    while (month < 1 || month > 12) {
        printf("月を入力して下さい。\n");
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            printf("1~12の整数を入力してください。\n");
        }
    }

    max_day = max_days[month-1];
    
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)) {
        max_day++;
    }

    printf("%d年%d月の日数は%d日です。\n", year, month, max_day);

    return 0;
}