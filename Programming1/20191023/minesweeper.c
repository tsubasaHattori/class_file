// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MS_SIZE 8

int main(void)
{
    int mode;
    int number_of_mines = 10;
    int mine_map[MS_SIZE][MS_SIZE] = {{0}};
    int game_board[MS_SIZE][MS_SIZE] = {{0}};
    int i = 1;
    int x, y, p, q, r, s;

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
    
    // for (p=0; p<MS_SIZE; p++) {
    //     for (q=0; q<MS_SIZE; q++) {
    //         printf("%2d ", mine_map[p][q]);
    //     }
    //     printf("\n");
    // }

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
    

    // 課題５　ゲーム終了の条件
    while(    ) {



        printf("モードを選択してください: セルを開く (1), フラグを設置/除去する (2): ");
        scanf("%d", &mode);
        while (mode != 1 && mode != 2){
            printf("1か2を入力してください: ");
            scanf("%d", &mode);
        }

        //　ユーザがセルを選択


        // 課題３　選択したセルを開ける　ゲームオーバーの判定
        if (mode == 1) {
            // ゲームオーバーの判定
            if (mine_map[y][x] == -1) {
                printf("GAME OVER\n");
            }
            // 近傍８セルの地雷がないセルのみを開ける（１にする）
            for (r=0; r<3; r++) {
                for(s=0; s<3; s++) {
                    if (x-1+r >= 0 && y-1+r < MS_SIZE && x-1+s >= 0 && y-1+s < MS_SIZE) {
                            game_board[x-1+r][y-1+s] = mine_map[x-1+r][y-1+s] == -1  ? 0 : 1;
                    }
                }
            }


        } 
        // 課題４　選択したセルにフラグ設置
        else {



        }

        // 課題５　ゲームクリアの条件
        if (  ) {

            printf("Congratulation!\n");
        }
    }

    return 0;
}
