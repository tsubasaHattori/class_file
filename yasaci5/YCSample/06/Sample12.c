#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("���Ԗڂ̏������΂��܂����H�i1�`10�j\n");
   scanf("%d", &res);

   for(i=1; i<=10; i++){
      if(i == res)
         continue;
      printf("%d�Ԗڂ̏����ł��B\n", i);
   }

   return 0;
}
