#include <stdio.h>

/* buy�֐��̒�` */
int buy(int x, int y)
{
   int z;
   
   printf("%d���~��%d���~�̎Ԃ𔃂��܂����B\n", x, y);

   z= x+y;

   return z;
}

/* buy�֐��̌Ăяo�� */ 
int main(void)
{
   int num1, num2, sum;

   printf("������̎Ԃ𔃂��܂����H\n");
   scanf("%d",&num1);

   printf("������̎Ԃ𔃂��܂����H\n");
   scanf("%d",&num2);

   sum = buy(num1, num2);
   
   printf("���v��%d���~�ł��B\n", sum);

   return 0;
}
