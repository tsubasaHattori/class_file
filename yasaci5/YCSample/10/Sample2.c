#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,55,22,75};

   printf("test[0]�̒l��%d�ł��B\n", test[0]);
   printf("test[0]�̃A�h���X��%p�ł��B\n", &test[0]);
   printf("test�̒l��%p�ł��B\n", test);

   return 0;
}
