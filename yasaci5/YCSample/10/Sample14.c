#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[100];
   char str2[100];

   printf("1�Ԗڂ̕��������͂��Ă��������B\n");
   scanf("%s", str1);

   printf("2�Ԗڂ̕��������͂��Ă��������B\n");
   scanf("%s", str2);

   if(strcmp(str1, str2) == 0){
      printf("2�̕�����͓����ł��B\n");
   }
   else
   {
      printf("2�̕�����͈قȂ�܂��B\n");
   }
   return 0;
}
