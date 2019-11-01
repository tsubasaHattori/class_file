// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int power(int x, int y)
{
    int i; 
    int result = 1;
    for (i=0; i<y; i++) {
        result *= x;
    }
    return result;
}

int main(void)
{
    int i, j, num;

    printf("整数を入力してください。\n");
    scanf("%d", &num);

    printf("1から%dまでの整数を2,3,...,7乗すると\n以下のようになります。\n", num);
    
    for (i=1; i<=num; i++) {
        printf("%2d:", i);
        for(j=2; j<=7; j++) {
            printf("%11d", power(i, j));
        }
        printf("\n");
    }

    return 0;
}
