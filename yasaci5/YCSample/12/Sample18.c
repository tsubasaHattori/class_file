#include <stdio.h>
int main(void)
{
   int i;
   int sum = 0;

   fprintf(stderr, "�\�[�X�t�@�C�����F%s\n", __FILE__);
   fprintf(stderr, "�쐬���t�F%s\n", __DATE__);
   fprintf(stderr, "�쐬�����F%s\n", __TIME__);
   for(i=1; i<=5; i++){
      sum = i + sum;
   }
   printf("1�`5�܂ł̍��v�l��%d�ł��B\n", sum);

   return 0;
}
