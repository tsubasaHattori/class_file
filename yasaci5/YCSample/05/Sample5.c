#include <stdio.h>

int main(void)
{
   int res; 

   printf("��������͂��Ă��������B\n");
   scanf("%d", &res);

   switch(res){
      case 1:
         printf("1�����͂���܂����B\n");
         break;
      case 2:
         printf("2�����͂���܂����B\n");
         break;
      default:
         printf("1��2����͂��Ă��������B\n");
         break;
   }

   return 0;
}
