#include <stdio.h>

/* max�֐��̒�` */
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}

int main(void)
{
   int num1, num2, ans;

   printf("1�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d",&num1);

   printf("2�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d",&num2);

   ans = max(num1, num2);
   
   printf("�ő�l��%d�ł��B\n", ans);

   return 0;
}
