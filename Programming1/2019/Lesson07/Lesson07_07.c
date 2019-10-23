// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int reverse[NUM];
   int tmp;
   int i, j, s, t, v;

   printf("%d人の点数を入力してください。\n", NUM);
   
   for (i=0; i<NUM; i++) {
      scanf("%d", &test[i]);
   }

   for (s=0; s<NUM-1; s++) {
      for (t=s+1; t<NUM; t++) {
         if (test[t] > test[s]) {
            tmp = test[t];
            test[t] = test[s];
            test[s] = tmp;
            
         }
      }
   }

   for (v=0; v<NUM; v++) {
      reverse[v] = test[NUM-1-v];
   }

   for (j=0; j<NUM; j++) {
      printf("%d番目の人の点数は%dです。\n", j+1, reverse[j]);
   }

   return 0;
}
