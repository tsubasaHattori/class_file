#include <stdio.h>

/* sum�֐��̒�` */
int sum(int x, int y)
{
   int z;
   
   z= x+y;

   return z;
}

int main(void)
{
   int num1, num2, ans;

   printf("1�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d",&num1);

   printf("2�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d",&num2);

   ans = sum(num1, num2);
   
   printf("���v��%d�ł��B\n", ans);

   return 0;
}
