#include <stdio.h>

int a = 0;

/* func�֐��̒�` */
void func(void)
{
   int b = 0;
   static int c = 0;

   printf("�ϐ�a��%d�ϐ�b��%d�ϐ�c��%d�ł��B\n", a, b, c);

   a++;
   b++;
   c++;
}

/* main�֐��̒�` */
int main(void)
{
   int i;

   for(i=0; i<5; i++)
      func();

  return 0;
}
