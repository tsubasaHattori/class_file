#include <stdio.h>

int main(void)
{
   char str[100];
   int i, c;

   printf("���������͂��Ă��������B\n");
   scanf("%s", str);

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        c++;
      }
   }

   printf("%s�̒���a��%d����܂��B\n", str, c);

   return 0;
}
