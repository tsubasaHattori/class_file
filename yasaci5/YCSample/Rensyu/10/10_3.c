#include <stdio.h>

/* compare�֐��̐錾 */
int compare(char str1[], char str2[]);

int main(void)
{
   char str1[100];
   char str2[100];
   int ans;

   printf("1�Ԗڂ̕��������͂��Ă��������B\n", str1);
   scanf("%s", str1);

   printf("2�Ԗڂ̕��������͂��Ă��������B\n", str2);
   scanf("%s", str2);

   ans = compare(str1, str2);

   if(ans == 1){
      printf("2�̕�����͓����ł��B\n");
   }
   else
   {
      printf("2�̕�����͈قȂ�܂��B\n");
   }
   return 0;
}

/* compare�֐��̒�` */
int compare(char str1[], char str2[])
{
   int i;

   for(i=0; str1[i] == str2[i]; i++){
      if(str1[i] == '\0'){
         return 1;
      }
   }
   return -1;
}
