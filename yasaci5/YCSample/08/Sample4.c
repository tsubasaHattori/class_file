#include <stdio.h>

/* buy�֐��̒�` */
void buy(int x)
{
   printf("%d���~�̎Ԃ𔃂��܂����B\n", x);
}

/* buy�֐��̌Ăяo�� */ 
int main(void)
{
   int num;

   printf("1��ڂ͂�����̎Ԃ𔃂��܂����H\n");
   scanf("%d", &num);

   buy(num);

   printf("2��ڂ͂�����̎Ԃ𔃂��܂����H�@\n");
   scanf("%d", &num);

   buy(num);

  return 0;
}
