#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("1�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d", &num);
   sum += num;

   printf("2�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d", &num);
   sum += num;

   printf("3�Ԗڂ̐�������͂��Ă��������B\n");
   scanf("%d", &num);
   sum += num;

   printf("3�̐��̍��v��%d�ł��B\n", sum);

   return 0;
}
