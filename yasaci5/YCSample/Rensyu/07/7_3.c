#include <stdio.h>

int main(void)
{
   char str[100];
   int i, c;

   c = 0;

   printf("���������͂��Ă��������B\n");
   scanf("%s", str);

   for(i=0; str[i]!='\0'; i++){
     c++;
   }

   printf("������̒�����%d�ł��B\n", c);

   return 0;
}
