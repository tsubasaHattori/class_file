#include <stdio.h>

/* �\���̌^struct Car�̐錾 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234,25.5};

   printf("�Ԃ̃i���o�[��%d�F�K�\�����ʂ�%f�ł��B\n", car1.num, car1.gas);

   return 0;
}
