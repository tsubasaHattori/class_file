#include <stdio.h>

/* �\���̌^struct Person�̐錾 */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

/* aging�֐��̐錾 */
void aging(Person *p);

int main(void)
{
   Person prs;
   
   printf("�N�����͂��Ă��������B\n");
   scanf("%d", &prs.age);

   printf("�̏d����͂��Ă��������B\n");
   scanf("%lf", &prs.weight);

   printf("�g������͂��Ă��������B\n");
   scanf("%lf", &prs.height);

   printf("�N��%d�̏d%f�g��%f�ł��B\n", 
        prs.age, prs.weight, prs.height);

   aging(&prs);

   printf("1�N�o�߂��܂����B\n");

   printf("�N��%d�̏d%f�g��%f�ł��B\n", 
        prs.age, prs.weight, prs.height);

   return 0;
}

/* aging�֐��̒�` */
void aging(Person* p)
{
   p->age++;
}
