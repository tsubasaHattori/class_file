// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>

int main(void)
{
   char ch; 

   printf("文字を入力してください。\n");
   scanf("%c", &ch);

   if (ch == 'A') {
      printf("aが入力されました。\n");
   } else if (ch == 'B') {
      printf("bが入力されました。\n");
   } else if (ch == 'C') {
      printf("cが入力されました。\n");
   } else {
      printf("AかBかCを入力してください。\n");
   }

   return 0;
}
