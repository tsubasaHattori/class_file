#include <stdio.h>

int main(void)
{
   int i;
   double d;
   char str[100];

   printf("�����l����͂��Ă��������B\n");
   scanf("%d", &i);

   printf("�����l����͂��Ă��������B\n");
   scanf("%lf", &d);

   printf("���������͂��Ă��������B\n");
   scanf("%s", str);

   printf("���͂��������l��%d�ł��B\n", i);
   printf("���͂��������l��%f�ł��B\n", d);
   printf("���͂����������%s�ł��B\n", str);

   return 0;
}
