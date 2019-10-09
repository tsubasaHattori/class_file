// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
   int a, b; 

   printf("a/bを計算します。\n");

   printf("aを入力してください。\n");
   scanf("%d", &a);

   printf("bを入力してください。\n");
   scanf("%d", &b);

   if (b) {
      printf("a/b は%f です。\n", a/(double)b);
   } else {
       printf("a/bを計算できません。 0割エラーです。\n");
   }

   return 0;
}
