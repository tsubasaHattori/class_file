#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[10];
   char str2[10];

   strcpy(str1,"Hello");
   strcpy(str2,"Goodbye");

   printf("�z��str1��%s�ł��B\n", str1);
   printf("�z��str2��%s�ł��B\n", str2);

   return 0;
}
