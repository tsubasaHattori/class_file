#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("���ԖڂŃ��[�v�𒆎~���܂����H�i1�`10�j\n");

   scanf("%d", &res);

   for(i=1; i<=10; i++){
      printf("%d�Ԗڂ̏����ł��B\n", i);
      if(i == res)
         break;
   }

   return 0;
}

