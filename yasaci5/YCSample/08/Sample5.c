#include <stdio.h>

/* buy�֐��̒�` */
void buy(int x, int y)
{
   printf("%d���~��%d���~�̎Ԃ𔃂��܂����B\n", x, y);

}

/* buy�֐��̌Ăяo�� */ 
int main(void)
{
   int num1, num2;

   printf("������̎Ԃ𔃂��܂����H\n");
   scanf("%d", &num1);

   printf("������̎Ԃ𔃂��܂����H\n");
   scanf("%d", &num2);

   buy(num1, num2);

   return 0;
}
