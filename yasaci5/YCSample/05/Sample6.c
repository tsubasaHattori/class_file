#include <stdio.h>

int main(void)
{
   char res; 

   printf("���Ȃ��͒j���ł����H\n");
   printf("Y�܂���N����͂��Ă��������B\n");

   res = getchar();

   if (res == 'Y' || res == 'y'){
      printf("���Ȃ��͒j���ł��ˁB\n");
     }
   else if(res == 'N' || res == 'n'){
      printf("���Ȃ��͏����ł��ˁB\n");
   }
   else{
      printf("Y��N����͂��Ă��������B\n");
   }

   return 0;
}
