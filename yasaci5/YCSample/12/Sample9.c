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

   fputs("Hello!\n", fp);
   fputs("Goodbye!\n", fp);
   printf("�t�@�C���ɏ������݂܂����B\n");

   fclose(fp);
   printf("�t�@�C�����N���[�Y���܂����B\n");

   return 0;
}
