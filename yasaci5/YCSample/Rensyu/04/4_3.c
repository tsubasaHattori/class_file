#include <stdio.h>

int main(void)
{
   double height, width;

   printf("�O�p�`�̍�������͂��Ă��������B\n");
   scanf("%lf", &height);

   printf("�O�p�`�̒�ӂ���͂��Ă��������B\n");
   scanf("%lf", &width);

   printf("�O�p�`�̖ʐς�%f�ł��B\n", height * width / 2);

   return 0;
}
