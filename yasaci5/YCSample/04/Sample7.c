#include <stdio.h>

int main(void)
{
   int a = 1;
   int b = 0;

   printf("short int�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(short int));
   printf("int�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(int));
   printf("long int�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(long int));
   printf("float�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(float));
   printf("double�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(double));
   printf("long double�^�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(long double));
   printf("�ϐ�a�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(a));
   printf("��a+b�̃T�C�Y��%d�o�C�g�ł��B\n", sizeof(a+b));

   return 0;
}
