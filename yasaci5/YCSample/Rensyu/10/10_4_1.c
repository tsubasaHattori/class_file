#include <stdio.h>

/* length�֐��̐錾 */
int length(char *str);

int main(void)
{
   char str[100];
   int ans;

   printf("���������͂��Ă��������B\n");
   scanf("%s", str);

   ans = length(str);

   printf("������̒�����%d�ł��B\n", ans);

   return 0;
}

/* length�֐��̒�` */
int length(char *str)
{
   int c = 0;

   c = 0;

   while(*str){
      c++;
      str++;
   }

   return c;
}
