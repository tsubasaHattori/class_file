#include <stdio.h>

/* �����swap�֐��̐錾 */
void swap(int x, int y);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("�ϐ�num1�̒l��%d�ł��B\n", num1);
   printf("�ϐ�num2�̒l��%d�ł��B\n", num2);
   printf("�ϐ�num1��num2�̒l���������܂��B\n", num1);

   swap(num1, num2);

   printf("�ϐ�num1�̒l��%d�ł��B\n", num1);
   printf("�ϐ�num2�̒l��%d�ł��B\n", num2);

   return 0;
}

/* �����swap�֐��̒�` */
void swap(int x, int y)
{
   int tmp;

   tmp = x;
   x = y;
   y = tmp;
}
