#include <stdio.h>

/* �\���̌^struct Person�̐錾 */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

int main(void)
{
   Person prs1, prs2;
   
   printf("�N�����͂��Ă��������B\n");
   scanf("%d", &prs1.age);

   printf("�̏d����͂��Ă��������B\n");
   scanf("%lf", &prs1.weight);

   printf("�g������͂��Ă��������B\n");
   scanf("%lf", &prs1.height);

   printf("�N�����͂��Ă��������B\n");
   scanf("%d", &prs2.age);

   printf("�̏d����͂��Ă��������B\n");
   scanf("%lf", &prs2.weight);

   printf("�g������͂��Ă��������B\n");
   scanf("%lf", &prs2.height);

   printf("�N��%d�̏d%f�g��%f�ł��B\n", 
         prs1.age, prs1.weight, prs1.height);

   printf("�N��%d�̏d%f�g��%f�ł��B\n", 
         prs2.age, prs2.weight, prs2.height);

   return 0;
}
