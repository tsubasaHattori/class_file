#include <stdio.h>

int main(void)
{
   int a, b;
   int *pA;

   a = 5;
   b = 10;

   pA = &a;

   printf("�ϐ�a�̒l��%d�ł��B\n", a);
   printf("�|�C���^pA�̒l��%p�ł��B\n", pA);	
   printf("*pA�̒l��%d�ł��B\n", *pA);	

   pA = &b;

   printf("�ϐ�b�̒l��%d�ł��B\n", b);
   printf("�|�C���^pA�̒l��%p�ɕύX����܂����B\n", pA);	
   printf("*pA�̒l��%d�ł��B\n", *pA);	

   return 0;
}
