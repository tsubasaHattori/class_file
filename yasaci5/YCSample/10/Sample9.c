#include <stdio.h>

int main(void)
{
   char str[3][20] = {"Hello", "GoodBye", "Thankyou"};
   int i;

   for(i=0; i<3; i++){
      printf("�������%s�ł��B\n", str[i]);
   }

   return 0;
}
