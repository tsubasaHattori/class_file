#include <stdio.h>

/* length�֐��̐錾 */
int length(char str[]);

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
int length(char str[])
{
   int i, c;

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      c++;
   }

   return c;
}
