#include <stdio.h>
#define DEBUG

int main(void)
{
   int i;
   int sum = 0;
   
   for(i=1; i<=5; i++){

      #ifdef DEBUG
         fprintf(stderr, "�ϐ�sum�̒l��%d�ƂȂ��Ă��܂��B\n", sum);
      #endif
      sum = i + sum;
   }
   printf("1�`5�܂ł̍��v�l��%d�ł��B\n", sum);

   return 0;
}
