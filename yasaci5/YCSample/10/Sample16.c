#include <stdio.h>

/*max�֐��̐錾*/
int max(int x, int y);

int main(void)
{
   int num1, num2, ans;
   int (*pM)(int x, int y);
   pM = max;
   printf("1�Ԗڂ̐��l����͂��Ă��������B\n");
   scanf("%d",&num1);

   printf("2�Ԗڂ̐��l����͂��Ă��������B\n");
   scanf("%d",&num2);

   ans = (*pM)(num1, num2);
   
   printf("�ő�l��%d�ł��B\n", ans);

   return 0;
}

/* max�֐��̒�` */
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}
