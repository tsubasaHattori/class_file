#include <stdio.h>

int main(void)
{
   int num1 = 2;
   int num2 = 3;
   int sum = num1+num2;

   printf("�ϐ�num1�̒l��%d�ł��B\n", num1);
   printf("�ϐ�num2�̒l��%d�ł��B\n", num2);
   printf("num1+num2�̒l��%d�ł��B\n", sum);

   num1 = num1+1;

   printf("�ϐ�num1�̒l��1��������%d�ł��B\n", num1);

   return 0;
}
