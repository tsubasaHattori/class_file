#include <stdio.h>

int main(void)
{
   int i = 1;
   
   while(i <= 5){
      printf("%d番目の繰り返しです。\n", i);
      i++;
   }
   printf("繰り返しが終わりました。\n");

   return 0;
}
