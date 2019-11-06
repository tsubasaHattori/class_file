// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_balls(int ball_a, int ball_b, int plate_size) {
    int i;
    
    for (i=0; i<plate_size; i++) {
            if (i == ball_a)      { printf("o"); }
            else if (i == ball_b) { printf("x"); }
            else                  { printf("_"); } 
        }
    printf("\n");
    usleep(0.2*1000000);
    printf("\033[1A\033[2K");
}

void update_positions_of_two_balls(int *ball_a, int *ball_b, int *step_a, int *step_b) {
    if (*ball_b - *ball_a == 1) {
        *step_a = *step_a * (-1);
        *step_b = *step_b * (-1);
    }
    *ball_a += *step_a;
    *ball_b += *step_b;
}

int main(void)
{
    int ball_a, ball_b;
    int step_a = 1;
    int step_b = -1;
    int plate_size = 50; 

    ball_a = 1;
    ball_b = plate_size - 2;

    while (ball_b - ball_a != 51) {
        print_balls(ball_a, ball_b, plate_size);
        update_positions_of_two_balls(&ball_a, &ball_b, &step_a, &step_b);
    } 
    sleep(1);
    printf("END\n");
    sleep(1);

    return 0;
}
