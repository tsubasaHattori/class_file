#include <stdio.h>

/* ���p�̌^union Year�̐錾 */
typedef union Year{
   int ad;
   int gengo; 
}Year;

int main(void)
{
   Year myyear;
   int a, g;

   printf("�������͂��Ă��������B\n");
   scanf("%d", &a);

   myyear.ad  = a;

   printf("�����%d�ł��B\n", myyear.ad);
   printf("������%d�ł��B\n", myyear.gengo);

   printf("��������͂��Ă��������B\n");
   scanf("%d",&g);

   myyear.gengo = g;

   printf("������%d�ł��B\n", myyear.gengo);
   printf("�����%d�ł��B\n", myyear.ad);

   return 0;
}
