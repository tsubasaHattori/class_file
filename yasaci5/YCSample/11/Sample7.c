#include<stdio.h>

/* �\���̌^struct Car1�̐錾 */
typedef struct Car1{
   int num;
   double gas;
   unsigned int tire : 3;
   unsigned int roof : 1;
   unsigned int color : 4;
}Car1;

/* �\���̌^struct Car2�̐錾 */
typedef struct Car2{
   int num;
   double gas;
   unsigned int tire;
   unsigned int roof;
   unsigned int color;
}Car2;

int main(void)
{
   printf("�r�b�g�t�B�[���h���g�����\���̂̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(Car1));
   printf("�r�b�g�t�B�[���h���g��Ȃ��\���̂̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(Car2));

   return 0;
}
