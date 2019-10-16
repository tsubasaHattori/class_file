// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <unistd.h> 

int main(void)
{
    int i=0, w=0, n;

    printf("整数を入れてください。\n");
    scanf("%d", &n);

    while (w<n) {
        for (i=0; i<n; i++) {
            if (w == i) {
                printf("o");
            } else {
                printf("_");
            }
        }
        printf("\n");
        
        usleep(0.2*1000000);
        printf("\033[1A\033[2K");

        w++;
    }

    sleep(1);
    printf("END\n");
    sleep(1);

    return 0;
}