#include <stdio.h>
#include <string.h>

int main(void)
{
   char str0[20];
   char str1[10];
   char str2[10];

   strcpy(str1,"Hello");
   strcpy(str2,"Goodbye");
   strcpy(str0,str1);
   strcat(str0,str2);

   printf("�z��str1��%s�ł��B\n", str1);
   printf("�z��str2��%s�ł��B\n", str2);
   printf("�A�������%s�ł��B\n", str0); 

   return 0;
}
