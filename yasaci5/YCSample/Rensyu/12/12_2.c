#include <stdio.h>

int main(void)
{
   FILE *fp;
   int i, j;

   fp = fopen("result.txt", "w");

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
