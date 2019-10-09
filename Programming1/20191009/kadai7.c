// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
    int year;

    printf("年を西暦で入力してください。\n");
    scanf("%d", &year);

    printf("入力された年は %d 年です。\n", year);

    switch (year) {
        case 1916:
        case 1940:
        case 1944:
            printf("%d 年は夏季オリンピックが中止された年です。\n", year); 
            break;
        case 1906:
            printf("%d 年は夏季オリンピック特別開催年です。\n", year); 
            break;
        default:
            if (year > 2020 || year < 1896) {
                printf("1896 年から 2020 年までの年を入力してください。\n"); 
            } else if (year % 4) {
                printf("%d 年は夏季オリンピック開催年ではありません。\n", year); 
            } else {
                printf("%d 年は夏季オリンピック開催年です。\n", year); 
            }
            break;
    }

    return 0;
    }
