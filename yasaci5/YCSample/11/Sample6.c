#include<stdio.h>

/* �\���̌^struct Car�̐錾 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   printf("int�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(int));
   printf("double�^�T�C�Y��%d�o�C�g�ł��B\n", sizeof(double));
   printf("�\����struct Car�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(Car));
   printf("�\����struct Car�^�ւ̃|�C���^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(Car *));

   return 0;
}
