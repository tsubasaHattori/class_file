#include <stdio.h>

int main(void)
{
   int res;

   printf("0����10�܂ł̒l����͂��Ă��������B\n");
   scanf("%d", &res);
   
   if(res >= 0 && res <= 10){
      printf("�����ł��B\n");
   }
   else{
      printf("�ԈႢ�ł��B\n");
   }
   return 0;
}
