// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
   int res; 
   int i;

   printf("整数を入力してください。\n");
   scanf("%d", &res);

   printf("%dから1までの数字を表示します。\n", res);

   for (i=res; i>=1; i--) {
       printf("%d\n", i);
   }

   return 0;
}
