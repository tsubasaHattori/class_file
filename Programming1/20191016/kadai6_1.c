// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    int i;
    int ball_a, ball_b;
    int step_a = 1;
    int step_b = -1;
    int plate_size = 50; 

    ball_a = 1;
    ball_b = plate_size - 2;

    while (ball_b - ball_a != -1) {
        for (i=0; i<plate_size; i++) {
            if (i == ball_a)                    { printf("o"); }
            else if (i == ball_b)               { printf("x"); }
            else                                { printf("_"); } 
        }
        ball_a += step_a;
        ball_b += step_b;
        printf("\n");
        usleep(0.2*1000000);
        printf("\033[1A\033[2K");
    }
    sleep(1);
    printf("END\n");
    sleep(1);

    return 0;
}