#include <stdio.h>
#define MAX(x, y) (x > y ? x : y)

int main(void)
{
   int num1, num2, ans;

   printf("1�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d",&num1);

   printf("2�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d",&num2);

   ans = MAX(num1, num2);
   
   printf("�ő�l��%d�ł��B\n", ans);

   return 0;
}
