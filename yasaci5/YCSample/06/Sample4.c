#include <stdio.h>

int main(void)
{
   int num, sum;
   int i;

   num = 0;
   sum = 0;

   printf("�����܂ł̍��v�����߂܂����H\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      sum += i; 
   }

   printf("1����%d�܂ł̍��v�l��%d�ł��B\n", num, sum);

   return 0;
}
