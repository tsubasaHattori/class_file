#include <stdio.h>

int main(void)
{
   char str[100];

   printf("���������͂��Ă��������B\n");
   gets_s(str, 100);

   printf("���͂����������%s�ł��B\n", str);

   return 0;
}
