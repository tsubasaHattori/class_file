#include <stdio.h>

int a = 0; 

/* func�֐��̒�` */
void func(void)
{
   int c = 2;

   printf("func�֐��ł͕ϐ�a��c���g���܂��B\n");
   printf("�ϐ�a�̒l��%d�ł��B\n", a);
   /* printf("�ϐ�b�̒l��%d�ł��B\n", b); */
   printf("�ϐ�c�̒l��%d�ł��B\n", c);
}

/* main�֐��̒�` */
int main(void)
{
   int b = 1;

   printf("main�֐��ł͕ϐ�a��b���g���܂��B\n");
   printf("�ϐ�a�̒l��%d�ł��B\n", a);
   printf("�ϐ�b�̒l��%d�ł��B\n", b);
   /* printf("�ϐ�c�̒l��%d�ł��B\n", c); */

   func();

   return 0;
}
