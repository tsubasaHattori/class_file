#include <stdio.h>

/* power�֐��̐錾 */
int power(int x, int y);

int main(void)
{
   int num1, num2, ans;

   printf("1�Ԗڂ̐�������͂��Ă��������B�i1�`5�j\n");
   scanf("%d",&num1);

   printf("2�Ԗڂ̐�������͂��Ă��������B�i1�`5�j\n");
   scanf("%d",&num2);

   ans = power(num1, num2);

   printf("%d��%d���%d�ł��B\n", num1, num2, ans);

   return 0;
}

/* power�֐��̒�` */
int power(int x, int y)
{
   int i;
   int pow = 1; 

   for(i=1; i<=y; i++){
      pow = pow * x;
   }
   return pow;
}
