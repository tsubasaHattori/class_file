#include <stdio.h>

int main(void)
{
   int test[5];
   int i, j;

   printf("5�l�̓_������͂��Ă��������B\n");

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   for(j=0; j<5; j++){
      printf("%d�Ԗڂ̐l�̓_����%d�ł��B\n", j+1, test[j]);
   }

   return 0;
}
