#include <stdio.h>

int main(void)
{
   FILE *fp; 

   fp = fopen("test1.txt", "w");

   if(fp == NULL){
      printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
      return 1;
   }
   else{
      printf("�t�@�C�����I�[�v�����܂����B\n");
   }

   fclose(fp);
   printf("�t�@�C�����N���[�Y���܂����B\n");

   return 0;
}
