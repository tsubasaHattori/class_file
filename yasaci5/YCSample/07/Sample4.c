#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM] = {80,60,22,50,75};
   int i;

   for(i=0; i<NUM; i++){
      printf("%d�Ԗڂ̐l�̓_����%d�ł��B\n", i+1, test[i]);
   }

   return 0;

}
