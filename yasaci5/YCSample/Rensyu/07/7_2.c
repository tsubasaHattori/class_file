#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int i, j;
   int num;

   num = 0;

   printf("�e�X�g�̓_������͂��Ă��������B\n");
   for(i=0; i<NUM; i++){
      scanf("%d", &test[i]);

      if(test[i] >= 70){
         num++;
      }
   }

   for(j=0; j<NUM; j++){
      printf("%d�Ԗڂ̐l�̓_����%d�ł��B\n", j+1, test[j]);
   }

   printf("70�_�ȏ�̊w����%d�l�ł��B\n", num);

   return 0;
}
