#include <stdio.h>

/* avg�֐��̐錾 */
double avg(int *pT);

int main(void)
{
   int test[5];
   int i;
   double ans;

   printf("5�l�̃e�X�g�̓_������͂��Ă��������B\n"); 

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   ans = avg(test);

   printf("5�l�̕��ϓ_��%f�_�ł��B\n", ans);

   return 0;
}

/* avg�֐��̒�` */
double avg(int *pT)
{
   int i;
   double sum;

   sum = 0.0;
   
   for(i=0; i<5; i++){
      sum += pT[i];
   }
   return sum/5;
}
