#include <stdio.h>

/* �\���̌^struct Car�̐錾 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car cars[3];
   int i;

   cars[0].num = 1234; cars[0].gas = 25.5;
   cars[1].num = 4567; cars[1].gas = 52.2;
   cars[2].num = 7890; cars[2].gas = 20.5;

   for(i=0; i<3; i++){
      printf("�Ԃ̃i���o�[��%d�F�K�\�����ʂ�%f�ł��B\n", cars[i].num, cars[i].gas);
   }

   return 0;
}
