#include <stdio.h>

/* �\���̌^struct Car�̐錾 */
struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   printf("�i���o�[����͂��Ă��������B\n");
   scanf("%d", &car1.num);

   printf("�K�\�����ʂ���͂��Ă��������B\n");
   scanf("%lf", &car1.gas);

   printf("�Ԃ̃i���o�[��%d�F�K�\�����ʂ�%f�ł��B\n", car1.num, car1.gas);

   return 0;
}
