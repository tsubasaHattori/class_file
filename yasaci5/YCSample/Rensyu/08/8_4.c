#include <stdio.h>
#define SQUARE(x) (x * x)

int main(void)
{
   int num, ans;

   printf("��������͂��Ă��������B\n");
   scanf("%d", &num);

   ans = SQUARE(num);

   printf("%d��2���%d�ł��B\n", num, ans);

   return 0;
}
