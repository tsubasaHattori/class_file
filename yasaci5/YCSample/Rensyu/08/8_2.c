#include <stdio.h>

/* square�֐��̐錾 */
int square(int x);

int main(void)
{
   int num, ans;

   printf("��������͂��Ă��������B\n");
   scanf("%d", &num);

   ans = square(num);

   printf("%d��2���%d�ł��B\n", num, ans);

   return 0;
}

/* square�֐��̒�` */
int square(int x)
{
   return x * x;
}
