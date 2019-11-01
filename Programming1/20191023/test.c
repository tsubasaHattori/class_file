// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MS_SIZE 8

int main(void)
{
    // int mode;
    int number_of_mines = 10;
    int mine_map[MS_SIZE][MS_SIZE] = {{0}};
    // int game_board[MS_SIZE][MS_SIZE];
    int i = 1;
    int p, q, r, s;

    srand((unsigned)time(NULL));
    
    // 課題１　地雷をランダムにセット
    while (i <= number_of_mines) {
        if (mine_map[rand() % MS_SIZE][rand() % MS_SIZE] == -1) {
            i--;
        } else {
            mine_map[rand() % MS_SIZE][rand() % MS_SIZE] = -1;
        }
        i++;
    }

    // 課題２　各セルの８近傍の地雷をカウント
    for (p=0; p<MS_SIZE; p++) {
        for (q=0; q<MS_SIZE; q++) {
            if (mine_map[p][q] == -1) {
                for (r=0; r<3; r++) {
                    for(s=0; s<3; s++) {
                        if (p-1+r >= 0 && p-1+r < MS_SIZE && q-1+s >= 0 && q-1+s < MS_SIZE) {
                            mine_map[p-1+r][q-1+s] = mine_map[p-1+r][q-1+s] >= 0 ? mine_map[p-1+r][q-1+s] + 1 : mine_map[p-1+r][q-1+s];
                        }
                    }
                }
                mine_map[p][q] = -1;
            }
        }
    }

    for (p=0; p<MS_SIZE; p++) {
        for (q=0; q<MS_SIZE; q++) {
            printf("%2d ", mine_map[p][q]);
        }
        printf("\n");
    }

    return 0;
}
