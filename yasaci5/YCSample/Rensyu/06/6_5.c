#include <stdio.h>

int main(void)
{
   int num, i;

   printf("2�ȏ�̐�������͂��Ă��������B\n");
   scanf("%d", &num);

   for(i=2; i<=num; i++){
      if(i == num){
         printf("%d�͑f���ł��B\n", num);
      }
      else if(num % i == 0){
         printf("%d�͑f���ł͂���܂���B\n", num);
         break;
      }
   }
   return 0;
}
