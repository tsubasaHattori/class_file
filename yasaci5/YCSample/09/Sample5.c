#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("�ϐ�a�̒l��%d�ł��B\n", a);

   *pA = 50;

   printf("*pA��50�������܂����B\n");
   printf("�ϐ�a�̒l��%d�ł��B\n", a);

   return 0;
}
