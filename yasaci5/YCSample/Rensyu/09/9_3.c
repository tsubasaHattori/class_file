#include <stdio.h>

/* add�֐��̐錾 */
void add(int *x1, int *x2, int a);

int main(void)
{
   int num1 = 0;
   int num2 = 0;
   int ad = 0;

   printf("2�Ȗڕ��̓_������͂��Ă��������B\n");
   scanf("%d", &num1);
   scanf("%d", &num2);

   printf("���Z����_������͂��Ă��������B\n");
   scanf("%d", &ad);

   add(&num1, &num2, ad);

   printf("%d�_���Z���܂����̂�\n", ad);
   printf("�Ȗ�1��%d�_�ƂȂ�܂����B\n", num1);
   printf("�Ȗ�2��%d�_�ƂȂ�܂����B\n", num2);

   return 0;
}

/* add�֐��̒�` */
void add(int *x1, int *x2, int a)
{
   *x1 += a;
   *x2 += a;
}
