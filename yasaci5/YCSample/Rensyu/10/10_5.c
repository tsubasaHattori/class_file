#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[100];
   int i, j;

   printf("���������͂��Ă��������B�i�p���j\n");
   scanf("%s", str);

   for(i=0; str[i]!='\0'; i++){
      str[i] = toupper(str[i]);
   }
   printf("�啶���ɂ����%s�ł��B\n", str);

   for(j=0; str[j]!='\0'; j++){
      str[j] = tolower(str[j]);
   }

   printf("�������ɂ����%s�ł��B\n", str);

   return 0;
}
