#include <stdio.h>
#include <unistd.h> 
#include <time.h>

#include "view_othello.h" // 描画関係のヘッダー

/*
  コンパイル:
  gcc -I/usr/X11R6/include -Wall   -c -o myothello.o myothello.c
  gcc -I/usr/X11R6/include -Wall   -c -o view_othello.o view_othello.c
  gcc -I/usr/X11R6/include -Wall -L/usr/X11R6/lib -lX11  -o myothello myothello.o view_othello.o
*/

/****
view_othello.h の中で以下のように定義されている．

#define EMPTY (-1)
#define WHITE (0)
#define BLACK (1)

struct othello{// オセロ用構造体
	int n; // ボードのサイズ
	int score[2]; // スコア記録用配列(必要に応じて利用)
	int pass_flag[2]; // パスしたかどうかを記録する配列(必要に応じて利用)
	int **board; // オセロのボード
};

今回は，オセロのボードを二次元配列(board)で表現する．
例えば，(1,5) のマスに白い石を置きたい場合は
board[0][4] = WHITE とすれば良い．
******/




// この関数を改造してください．
void myothello(int *step,        /* 現在のステップ数(初期値は0) */
			   struct othello *o /* オセロのボードなどの情報を含む構造体 */)
{
	int	x, y; /* どこのマスに置くのか記録する変数
                 行方向を x，列方向を y とする */
	int	color; /* 黒と白，どちらのターンか記録する変数 */
	int board_size = o->n;
	int can_put_board[board_size][board_size];
	int empty_board[board_size][board_size];
	int max_result = 0;
	int i, j;
	char *winner;

	for (i=0; i<board_size; i++) {
        for (j=0; j<board_size; j++) {
            can_put_board[i][j] = 0;
            empty_board[i][j] = 0;
        }
    }

	o->pass_flag[BLACK] = 1;
	o->pass_flag[WHITE] = 1;

	if( *step % 2 == 0 ){ /* 偶数ステップのときは黒の番 */
		color = BLACK;
		printf( "Black's turn\n" );
	} else { /* 奇数ステップのときは白の番 */
		color = WHITE;
		printf( "White's turn\n" );
	}

	// 課題5　石を置ける場所がない場合にパスする
	can_put(board_size, can_put_board, &max_result, color, o);

	// 課題4　ゲーム終了　
	if (o->pass_flag[color] && o->pass_flag[abs(color-1)]) {
		printf("両者とも石をおける場所がなくなりました。\nゲーム終了です。\n");
		printf("最終結果　白:%d　黒:%d　", o->score[WHITE] , o->score[BLACK]);
		if (o->score[WHITE] == o->score[BLACK]) {
			printf("\n引き分け！\n");
		} else {
			winner = o->score[WHITE] > o->score[BLACK] ? "白" : "黒";
			printf("石差:%s+%d\n", winner, abs(o->score[WHITE] - o->score[BLACK]));
			printf("%sの勝ち！\n", winner);
		}
		o->n = 0;
		return;
	}

	// 課題5　石を置ける場所がない場合にパスする
	if (o->pass_flag[color]) {
		printf("石をおける場所がありません。ターンをスキップします。\n");
		return;
	}

	// 課題8　勝手に石を置いていく関数
	if ((o->algo == 1 && color == BLACK) || o->algo == 2) {
		algo_4619072(&x, &y, color, board_size, can_put_board, o);
	} else {
		printf( "Input cell (x y)\n" );
		scanf( "%d %d", &x, &y );

		if (!(x > 0 && x <= board_size && y > 0 && y <= board_size)) {
			printf("1～%dの値を入力してください。\n", board_size);
			*step -= 1;
			return;
		} else {
			x--; y--;  /* 配列番号が0番から始まるため． */
		}
	}

	if (o->board[x][y] != EMPTY) {
		// 課題２　すでに石がある位置には新たに石を置けなくする
		printf("すでに石が置かれています。\n");
		*step -= 1;
	} else if (!can_put_board[x][y]) {
		// 課題6　相手の石を挟める位置のみに石を置けるようにする
		printf("相手の石を挟める位置に石を置いてください。\n");
		*step -= 1;
	} else {
		o->board[x][y] = color; /* 選んだマスに石を置く */
		o->score[color]++;
		// 課題3　自分の石で挟んだ相手の石の色を反転する
		reverse(x, y, color, o);
	}
}


/* 基本的に main 関数の中をいじる必要はありません．
   盤面のサイズを変えたい場合は 8 の部分を好きな数字に変更してください．*/
int main (int argc, char **argv){
	int i;
	// 課題７　盤面のサイズを実行時オプションで与える。
	int board_size = 8;
	int algo = 0;

    srand((unsigned)time(NULL));

	for (i=1; i<argc; i++) {
        if (strcmp(argv[i], "-n") == 0 && i+1 < argc) {
            board_size = atoi(argv[++i]);
        }
		if (strcmp(argv[i], "-c") == 0 && i+1 < argc) {
            algo = atoi(argv[++i]);
        }
    }

	struct view view={512,512,}, *v=&view; /* おまじない (ウィンドウ) */
	struct othello othello_instance={board_size,{2,2},{1,1},NULL, algo}, *o=&othello_instance; /* 8はボードの列(行)数．*/

	/* ボード作成(2次元配列の確保) */
	// o->board = (int***)malloc( sizeof(int**) * o->n * o->n );
	// for( i=0; i<o->n; i++ ) {
		o->board = (int**)malloc( sizeof(int*) * o->n );
		for( i=0; i<o->n; i++ ){
			o->board[i] = (int*)malloc(sizeof(int) * o->n );
		}
	// }

	view_init( v );    // おまじない (Xウィンドウ)
	view_loop( v, o ); // 描画(この関数の中で myothello 関数が呼ばれる)
	view_out( v );     // おまじない (Xウィンドウ)

	// ボードの削除(2次元配列のメモリを解放)
	for( i=0; i<o->n; i++ ){
		free( o->board[i] );
	}
	free( o->board );

	return 0;
}

// 課題3　自分の石で挟んだ相手の石の色を反転する
void reverse(int x, int y, int color, struct othello *o) {
	int board_size = o->n;
	int i, j;

	//　x方向
	for (i=1; x-i-1 >= 0 && o->board[x-i][y] == abs(color-1); i++) {
		if (o->board[x-i-1][y] == color) {
			for (j=0; j<i; j++){
				o->board[x-i+j][y] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}
	for (i=1; x+i+1 < board_size && o->board[x+i][y] == abs(color-1); i++) {
		if (o->board[x+i+1][y] == color) {
			for (j=0; j<i; j++){
				o->board[x+i-j][y] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}

	//　y方向
	for (i=1; y-i-1 >= 0 && o->board[x][y-i] == abs(color-1); i++) {
		if (o->board[x][y-i-1] == color) {
			for (j=0; j<i; j++){
				o->board[x][y-i+j] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}
	for (i=1; y+i+1 < board_size && o->board[x][y+i] == abs(color-1); i++) {
		if (o->board[x][y+i+1] == color) {
			for (j=0; j<i; j++){
				o->board[x][y+i-j] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}

	//　y=x方向
	for (i=1; x-i-1 >=0 && y-i-1 >= 0 && o->board[x-i][y-i] == abs(color-1); i++) {
		if (o->board[x-i-1][y-i-1] == color) {
			for (j=0; j<i; j++){
				o->board[x-i+j][y-i+j] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}
	for (i=1; x+i+1 < board_size && y+i+1 < board_size && o->board[x+i][y+i] == abs(color-1); i++) {
		if (o->board[x+i+1][y+i+1] == color) {
			for (j=0; j<i; j++){
				o->board[x+i-j][y+i-j] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}

	//　y=-x方向
	for (i=1; x-i-1 >=0 && y+i+1 >= 0 && o->board[x-i][y+i] == abs(color-1); i++) {
		if (o->board[x-i-1][y+i+1] == color) {
			for (j=0; j<i; j++){
				o->board[x-i+j][y+i-j] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}
	for (i=1; x+i+1 < board_size && y-i-1 < board_size && o->board[x+i][y-i] == abs(color-1); i++) {
		if (o->board[x+i+1][y-i-1] == color) {
			for (j=0; j<i; j++){
				o->board[x+i-j][y-i+j] = color;
				o->score[color]++;
				o->score[abs(color-1)]--;
			}
			break;
		}
	}
}

// 課題5　石を置ける場所がない場合にパスする
void can_put(int board_size, int can_put_board[][board_size], int *max_result, int color, struct othello *o) {
	int i, x, y;

	for (x=0; x<board_size; x++) {
		for (y=0; y<board_size; y++) {
			if (o->board[x][y] != EMPTY){ continue; }
			//　x方向
			for (i=1; x-i-1 >= 0 && o->board[x-i][y] == abs(color-1); i++) {
				if (o->board[x-i-1][y] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}
			for (i=1; x+i+1 < board_size && o->board[x+i][y] == abs(color-1); i++) {
				if (o->board[x+i+1][y] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}

			//　y方向
			for (i=1; y-i-1 >= 0 && o->board[x][y-i] == abs(color-1); i++) {
				if (o->board[x][y-i-1] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}
			for (i=1; y+i+1 < board_size && o->board[x][y+i] == abs(color-1); i++) {
				if (o->board[x][y+i+1] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}

			//　y=x方向
			for (i=1; x-i-1 >=0 && y-i-1 >= 0 && o->board[x-i][y-i] == abs(color-1); i++) {
				if (o->board[x-i-1][y-i-1] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}
			for (i=1; x+i+1 < board_size && y+i+1 < board_size && o->board[x+i][y+i] == abs(color-1); i++) {
				if (o->board[x+i+1][y+i+1] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}

			//　y=-x方向
			for (i=1; x-i-1 >=0 && y+i+1 < board_size && o->board[x-i][y+i] == abs(color-1); i++) {
				if (o->board[x-i-1][y+i+1] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}
			for (i=1; x+i+1 < board_size && y-i-1 >= 0 && o->board[x+i][y-i] == abs(color-1); i++) {
				if (o->board[x+i+1][y-i-1] == color) {
					can_put_board[x][y] += i;
					o->pass_flag[color] = 0;
				}
			}
			*max_result = can_put_board[x][y] > *max_result ? can_put_board[x][y] : *max_result;
		}
	}
}

// 課題8　勝手に石置いていく関数 　評価値：(取れる石の数) - (次に取られ得る石の最大数) 評価値を最大化
void algo_4619072(int *max_x, int *max_y, int color, int board_size, int can_put_board[][board_size], struct othello *o) {
	int x, y;
	int i, j;
	int tmp_board[board_size][board_size];
	int next_can_put_board[board_size][board_size];
	int tmp_get;
	int next_loss = 0;
	int result = -100;
	int tmp_score[2] = {o->score[0], o->score[1]};

	for (x=0; x<board_size; x++) {
		for (y=0; y<board_size; y++) {
			tmp_board[x][y] = o->board[x][y];
		}
	}

	for (x=0; x<board_size; x++) {
		for (y=0; y<board_size; y++) {
			if (can_put_board[x][y] == 0){ continue; }
			tmp_get = can_put_board[x][y];
			
			for (i=0; i<board_size; i++) {
				for (j=0; j<board_size; j++) {
					next_can_put_board[i][j] = 0;
				}
			}

			o->board[x][y] = color;
			reverse(x, y, color, o);
			can_put(board_size, next_can_put_board, &next_loss, abs(color-1), o);
			if ((tmp_get - next_loss > result) || (tmp_get - next_loss == result && rand() % 2 == 1)) {
				result = tmp_get - next_loss;
				*max_x = x;
				*max_y = y;
			}
			for (i=0; i<board_size; i++) {
				for (j=0; j<board_size; j++) {
					o->board[i][j] = tmp_board[i][j];
				}
			}
		}
	}
	o->score[0] = tmp_score[0];
	o->score[1] = tmp_score[1];
	
	usleep(1 * 10000);
	printf("%d %d に石が置かれました。\n", *max_x, *max_y);
}
