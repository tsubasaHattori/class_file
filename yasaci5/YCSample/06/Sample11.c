#include <stdio.h>

int main(void)
{
   int res; 

   printf("���т���͂��Ă��������B�i1�`5�j\n");
   scanf("%d", &res);

   switch(res){
      case 1:
      case 2:
         printf("������������΂�܂��傤�B\n");
         break;
      case 3:
      case 4:
         printf("���̒��q�ł���΂�܂��傤�B\n");
         break;
      case 5:
         printf("�����ւ�D�G�ł��B\n");
         break;
      default:
         printf("1�`5�܂ł̐��т���͂��Ă��������B\n");
         break;
   }
   
   return 0;
}
