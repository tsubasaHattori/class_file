#include <stdio.h>

/*�֐��̐錾*/
void show0(void);
void show1(void);
void show2(void);

int main(void)
{
   void (*pM[3])(void);
   int num;

   pM[0] = show0;
   pM[1] = show1;
   pM[2] = show2;

   printf("�ǂ̂̂���̂��Ăяo���܂����H�i0:�� 1:���[�V���O�J�[ 2:��s�@�j\n");
   scanf("%d",&num);

   if(0<= num && num <= 2)
      (*pM[num])();
   
   return 0;
}

/* �֐��̒�` */
void show0(void)
{
    printf("�Ԃł��B\n");
}
void show1(void)
{
    printf("���[�V���O�J�[�ł��B\n");
}
void show2(void)
{
    printf("��s�@�ł��B\n");
}

