#include <stdio.h>

/* �\���̌^struct Car�̐錾 */
typedef struct Car{
   int num;
   double gas;
}Car;

/* show�֐��̐錾 */
void show(Car c);

int main(void)
{
   Car car1 = {1234, 20.5};

   printf("�i���o�[����͂��Ă��������B\n");
   scanf("%d", &car1.num);

   printf("�K�\�����ʂ���͂��Ă��������B\n");
   scanf("%lf", &car1.gas);

   show(car1);

   return 0;
}

/* show�֐��̒�` */
void show(Car c)
{
   printf("�Ԃ̃i���o�[��%d�F�K�\�����ʂ�%f�ł��B\n", c.num, c.gas);
}
