#include <stdio.h>
#define NUM 20

int main(void)
{
   FILE *fp; 
   char str1[NUM];
   char str2[NUM];

   fp = fopen("test1.txt", "r");

   if(fp == NULL){
      printf("�t�@�C�����I�[�v���ł��܂���ł����B\n");
      return 1;
   }
   else{
      printf("�t�@�C�����I�[�v�����܂����B\n");
   }

   fgets(str1, NUM-1, fp);
   fgets(str2, NUM-1, fp);

   printf("�t�@�C���ɏ������܂�Ă��镶�����\n");
   printf("%s", str1);
   printf("%s", str2);

   fclose(fp);
   printf("�t�@�C�����N���[�Y���܂����B\n");

   return 0;
}
