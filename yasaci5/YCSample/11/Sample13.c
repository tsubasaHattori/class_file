#include <stdio.h>

/* �񋓌^enum Week�̐錾 */
typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week;

int main(void)
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: printf("���j�ł��B\n"); break;
      case MON: printf("���j�ł��B\n"); break;
      case TUE: printf("�Ηj�ł��B\n"); break;
      case WED: printf("���j�ł��B\n"); break;
      case THU: printf("�ؗj�ł��B\n"); break;
      case FRI: printf("���j�ł��B\n"); break;
      case SAT: printf("�y�j�ł��B\n"); break;
      default: printf("���j�������킩��܂���B\n"); break;
   }

   return 0;
}
