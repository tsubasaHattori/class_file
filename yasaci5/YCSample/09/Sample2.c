#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("�ϐ�a�̒l��%d�ł��B\n", a);
   printf("�ϐ�a�̃A�h���X��%p�ł��B\n", &a);
   printf("�|�C���^pA�̒l��%p�ł��B\n", pA);	

   return 0;
}
