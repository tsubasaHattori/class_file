// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
   int res = 0;
   int i;
   int count = 0;
   int sum = 0;

   printf("各テストの点数を入力してください。\n(負の数を入力すると終了)\n");

    for (i=1; i<100; i++) {
        printf("第%d科目:", i);
        scanf("%d", &res);
        if (res <= 0){
            break;
        }
        sum += res;
        count++;
    }

   printf("テスト数は%d科目です。\n", count);
   printf("テストの合計点は点%dです。\n", sum);
   printf("テストの平均点は%f点です。\n", sum/(double)count);

   return 0;
}
