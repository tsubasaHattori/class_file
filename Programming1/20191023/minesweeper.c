// 学籍番号：4619072　氏名：服部　翼
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MS_SIZE 8

// mine_mapの状態
#define MINE -1

// game_boardの状態
#define CLOSE 0
#define OPEN 1
#define FLAG 2

int main(void)
{
    int mode;
    int number_of_mines = 10;
    int mine_map[MS_SIZE][MS_SIZE] = {{0}};
    int game_board[MS_SIZE][MS_SIZE] = {{CLOSE}};
    int i, p, q, r, s, x, y;
    int open_count = 0;
    int replay_flag = 1;
    int finish_flag = 0;
    int rand_x, rand_y;

    srand((unsigned)time(NULL));

    // オプション課題3　リプレイ
    while (replay_flag) {
        
        // 各種数値をリセット
        finish_flag = 0;
        for (p=0; p<MS_SIZE; p++) {
            for (q=0; q<MS_SIZE; q++) {
                mine_map[p][q] = 0;
                game_board[p][q] = CLOSE;
            }
        }

        // オプション課題1　地雷数の変更
        do {
            printf("設置する地雷の数を入力してください(1~%d) :", MS_SIZE*MS_SIZE-1);
            scanf("%d", &number_of_mines);
            if (number_of_mines < 1 || number_of_mines > MS_SIZE*MS_SIZE-1) {
                printf("1~%dの範囲で入力してください。\n", MS_SIZE*MS_SIZE-1);
            }
        } while (number_of_mines < 1 || number_of_mines > MS_SIZE*MS_SIZE-1);

        // 課題１　地雷をランダムにセット
        for(i=1; i<=number_of_mines; i++) {
            rand_x = rand() % MS_SIZE;
            rand_y = rand() % MS_SIZE;
            if (mine_map[rand_y][rand_x] == MINE) {
                i--;
            } else {
                mine_map[rand_y][rand_x] = MINE;
            }
        }

        // 課題２　各セルの８近傍の地雷をカウント
        for (p=0; p<MS_SIZE; p++) {
            for (q=0; q<MS_SIZE; q++) {
                if (mine_map[p][q] != MINE) {
                    for (r=0; r<3; r++) {
                        for(s=0; s<3; s++) {
                            if (p-1+r >= 0 && p-1+r < MS_SIZE && q-1+s >= 0 && q-1+s < MS_SIZE) {
                                mine_map[p][q] = mine_map[p-1+r][q-1+s] == MINE ? mine_map[p][q]+1 : mine_map[p][q];
                            }
                        }
                    }
                }
            }
        }

        // 課題５　ゲーム終了の条件
        while(!finish_flag) {

            for (p=0; p<MS_SIZE; p++) {
                for (q=0; q<MS_SIZE; q++) {
                    printf("%2d ", mine_map[p][q]);
                }
                printf("\n");
            }
            // 現在の状態を出力
            printf("\n[y]\n\n");
            for (p=0; p<MS_SIZE; p++) {
                printf(" %d|", p);
                for (q=0; q<MS_SIZE; q++) {
                    if (game_board[p][q] == OPEN) {
                        if (mine_map[p][q]) {
                            printf("%2d ", mine_map[p][q]);
                        } else {
                            printf("   ");
                        }
                    } else if (game_board[p][q] == FLAG) {
                        printf(" F ");
                    } else {
                        printf(" x ");
                    }
                }
                printf("\n");
            }
            
            printf("   ");
            for (p=0; p<MS_SIZE; p++) {
                printf("---");
            }
            printf("\n   ");
            
            for (p=0; p<MS_SIZE; p++) {
                printf("%2d ", p);
            }
            printf("  [x]\n\n");

            // モードの選択
            printf("モードを選択してください: セルを開く (1), フラグを設置/除去する (2): ");
            scanf("%d", &mode);
            while (mode != 1 && mode != 2){
                printf("1か2を入力してください: ");
                scanf("%d", &mode);
            }

            // セルの選択
            printf("セルを選択してください。\n");
            printf("x : ");
            scanf("%d", &x);
            
            printf("y : ");
            scanf("%d", &y);

            // 課題３　選択したセルを開ける　フラグ、ゲームオーバーの判定
            if (mode == 1) {
                // ゲームオーバーの判定
                if (game_board[y][x] == FLAG){
                    printf("フラグを設置したセルは選択できません。\n");
                } else if (game_board[y][x] == OPEN) {
                    printf("すでに開いたセルです。\n");
                } else if (mine_map[y][x] == MINE) {
                    printf("G A M E  O V E R\n");
                    finish_flag = 1;
                    printf("ゲームを終了する (0), もう一度プレイする (1) :");
                    scanf("%d", &replay_flag);
                } else {
                // 近傍８セルの内、地雷とフラグのないセルを開ける
                    for (r=0; r<3; r++) {
                        for(s=0; s<3; s++) {
                            if (y-1+r >= 0 && y-1+r < MS_SIZE && x-1+s >= 0 && x-1+s < MS_SIZE) {
                                if (game_board[y-1+r][x-1+s] == CLOSE && mine_map[y-1+r][x-1+s] != MINE && game_board[y-1+r][x-1+s] != FLAG) {
                                    game_board[y-1+r][x-1+s] = OPEN;
                                    open_count++;
                                }
                            }
                        }
                    }
                }
            } 
            
            // 課題４　選択したセルにフラグ設置
            // オプション課題2　フラグ削除
            else {
                if (game_board[y][x] == OPEN) {
                    printf("開いていないセルを選択してください。\n");
                } else if (game_board[y][x] == FLAG) {
                    game_board[y][x] = CLOSE;
                } else {
                    game_board[y][x] = FLAG;
                }
            }

            // 課題５　ゲームクリアの条件
            if (open_count == MS_SIZE * MS_SIZE - number_of_mines) {
                finish_flag = 1;
                // クリア時の状態を表示
                printf("\n[y]\n\n");
                for (p=0; p<MS_SIZE; p++) {
                    printf(" %d|", p);
                    for (q=0; q<MS_SIZE; q++) {
                        if (game_board[p][q] == OPEN) {
                            if (mine_map[p][q]) {
                                printf("%2d ", mine_map[p][q]);
                            } else {
                                printf("   ");
                            }
                        } else if (game_board[p][q] == FLAG) {
                            printf(" F ");
                        } else {
                            printf(" x ");
                        }
                    }
                    printf("\n");
                }

                printf("   ");
                for (p=0; p<MS_SIZE; p++) {
                    printf("---");
                }
                printf("\n   ");
            
                for (p=0; p<MS_SIZE; p++) {
                   printf("%2d ", p);
                }
                printf("  [x]\n\n");

                printf("Congratulation!\n");
                printf("ゲームを終了する (0), もう一度プレイする (1) :");
                scanf("%d", &replay_flag);
            }
        }
    }
    return 0;
}
