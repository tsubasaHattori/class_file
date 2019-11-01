// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int power(int x, int y)
{
    int i = 0; 
    int result = 1;
    while (i<y) {
        result *= x;
        i++;
    }
    return result;
}

int main(void)
{
    int i=1, j=2, num;

    printf("整数を入力してください。\n");
    scanf("%d", &num);

    printf("1から%dまでの整数を2,3,...,7乗すると\n以下のようになります。\n", num);
    
    while (i<=num) {
        printf("%2d:", i);
        while (j<=7) {
            printf("%11d", power(i, j));
            j++;
        }
        j = 2;
        printf("\n");
        i++;
    }

    return 0;
}
