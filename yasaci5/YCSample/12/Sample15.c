#include <stdio.h>
#define NUM 8

int main(void)
{
   FILE *fp;
   int num;
   int i;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
      return 1;
   }

   printf("���Ԗڂ̃f�[�^��ǂݍ��݂܂����H�i1�`5�j\n");
   scanf("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);

   fread(&num, sizeof(int), 1, fp);

   printf("%d�Ԗڂ̃f�[�^��%d�ł��B\n", i, num);

   fclose(fp);

   return 0;
}
