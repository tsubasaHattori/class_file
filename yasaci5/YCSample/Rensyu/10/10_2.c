#include <stdio.h>

/* search�֐��̐錾 */
int search(char str[]);

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
int search(char str[])
{
   int i, c;

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        c++;
      }
   }

   return c;
}
