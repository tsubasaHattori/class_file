#include <stdio.h>

int main(void)
{
   char *str[3] = {"Hello", "GoodBye", "Thankyou"};
   int i;

   for(i=0; i<3; i++){
      printf("文字列は%sです。\n", str[i]);
   }

   return 0;
}
