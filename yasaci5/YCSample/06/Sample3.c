#include <stdio.h>

int main(void)
{
   int num;
   int i;

   printf("������*���o�͂��܂����H\n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      printf("*");
   }
   printf("\n");

   return 0;
}
