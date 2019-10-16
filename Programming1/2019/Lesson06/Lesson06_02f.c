// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
   int res; 
   int i;
   int result = 1;

   printf("整数を入力してください。\n");
   scanf("%d", &res);

   for (i=res; i>=1; i--) {
       result *= i;
   }

   printf("%d の階乗の値は %d です。\n", res, result);

   return 0;
}
