// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int olympic_check(int year)
{
    int result;

    switch (year) {
        case 1916:
        case 1940:
        case 1944:
            result = -1;
            break;
        case 1906:
            result = 2;
            break;
        default:
            if (year > 2020 || year < 1896) {
                result = -2;
            } else if (year % 4 == 0) {
                result = 1;
            } else {
                result = 0;
            }
            break;
    }
    return result;
}

int main(void)
{
    int year;
    int result;

    printf("年を西暦で入力してください。\n");
    scanf("%d", &year);
    printf("入力された年は %d 年です。\n", year);

    result = olympic_check(year);

    printf("%d\n", result);
    switch (result) {
        case -2:
            printf("1896 年から 2020 年までの年を入力してください。\n"); 
            break;
        case -1:
            printf("%d 年は夏季オリンピックが中止された年です。\n", year); 
            break;
        case 0:   
            printf("%d 年は夏季オリンピック開催年ではありません。\n", year); 
            break;
        case 1:
            printf("%d 年は夏季オリンピック開催年です。\n", year); 
            break;
        case 2:
            printf("%d 年は夏季オリンピック特別開催年です。\n", year); 
            break;
    }

    return 0;
}
