#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char *str;
   int num, i;

   printf("��������a��p�ӂ��܂����H\n");
   scanf("%d", &num);

   str = (char *) malloc (sizeof(char) * (num+1));
   if(!str){
      printf("���������m�ۂł��܂���ł����B\n");
      return 1;
   }

   for(i=0; i<num; i++){
      *(str+i) = 'a';
   }
   *(str+num) = '\0';

   printf("%s��p�ӂ��܂����B\n", str);

   free(str);

   return 0;
}
