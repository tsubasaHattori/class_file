#include <stdio.h>

int main(int argc, char* argv[])
{
   FILE *fp;
   int i, j;

   if(argc != 2){
      printf("�p�����[�^�̐����Ⴂ�܂��B\n");
      return 1;
   }

   fp = fopen(argv[1], "w");

   if(fp == NULL){
      printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
      return 1;
   }
   else{
      printf("�t�@�C�����I�[�v�����܂����B\n");
   }

   for (i=1; i<=5; i++){
      for(j=1; j<=5; j++){
         fprintf(fp, "%3d", i*j); 
      }
      fprintf(fp, "\n");
   }

   fclose(fp);
   printf("�t�@�C�����N���[�Y���܂����B\n");

   return 0;
}
