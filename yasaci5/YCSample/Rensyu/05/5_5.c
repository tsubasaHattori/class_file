#include <stdio.h>

int main(void)
{
   int res;

   printf("���т���͂��Ă��������B\n");
   scanf("%d", &res);
   
   printf("���т�%d�ł��B\n", res);
   
   switch(res){
   case 1:
      printf("�����Ƃ���΂�܂��傤�B\n");
      break;
   case 2:
      printf("������������΂�܂��傤�B\n");
      break;
   case 3:
      printf("����ɏ���߂����܂��傤�B\n");
      break;
   case 4:
      printf("�����ւ�悭�ł��܂����B\n");
      break;
   case 5:
      printf("�����ւ�D�G�ł��B\n");
      break;
   }

   return 0;
}
