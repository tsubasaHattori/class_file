#include <stdio.h>

/* �\���̌^struct Person�̐錾 */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

int main(void)
{
   Person prs[2];
   int i, j;
   
   for(i=0; i<2; i++){
      printf("�N�����͂��Ă��������B\n");
      scanf("%d", &prs[i].age);

      printf("�̏d����͂��Ă��������B\n");
      scanf("%lf", &prs[i].weight);

      printf("�g������͂��Ă��������B\n");
      scanf("%lf", &prs[i].height);
   }

   for(j=0; j<2; j++){
      printf("�N��%d�̏d%f�g��%f�ł��B\n", 
            prs[j].age, prs[j].weight, prs[j].height);
   }
   return 0;
}
