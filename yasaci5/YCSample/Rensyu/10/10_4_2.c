#include <stdio.h>

/* search�֐��̐錾 */
int search(char *str);

int main(void)
{
   char str[100];
   int ans;

   printf("���������͂��Ă��������B\n");
   scanf("%s", str);

   ans = search(str);

   printf("%s�̒���a��%d����܂��B\n", str, ans);

   return 0;
}

/* search�֐��̒�` */
int search(char *str)
{
   int c = 0;

   while(*str){
      if(*str == 'a'){
        c++;
      }
      str++;
   }

   return c;
}
