#include <stdio.h>

int main(void)
{
   char str[100];
   int i;

   printf("���������͂��Ă��������B\n");
   scanf("%s", str);

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        str[i] = 'b';
      }
   }

   printf("%s�ɒu�������܂����B\n", str);

   return 0;
}
