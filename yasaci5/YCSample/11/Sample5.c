#include <stdio.h>

/* �\���̌^struct Car�̐錾 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234, 25.5};
   Car car2 = {4567, 52.2};

   printf("car1�̎Ԃ̃i���o�[��%d�F�K�\�����ʂ�%f�ł��B\n", car1.num, car1.gas);
   printf("car2�̎Ԃ̃i���o�[��%d�F�K�\�����ʂ�%f�ł��B\n", car2.num, car2.gas);

   car2 = car1;

   printf("car1��car2�ɑ�����܂����B\n");

   printf("car2�̃i���o�[��%d�F�K�\�����ʂ�%lf�ɂȂ�܂����B\n", car2.num, car2.gas);

   return 0;
}
