#include <stdio.h>
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
			   struct othello *o /* オセロのボードなどの情報を含む構造体 */
	){
	int	x, y; /* どこのマスに置くのか記録する変数
                 行方向を x，列方向を y とする */
	int	color; /* 黒と白，どちらのターンか記録する変数 */

	if( *step % 2 == 0 ){ /* 偶数ステップのときは黒の番 */
		color = BLACK;
		printf( "Black's turn\n" );
	} else { /* 奇数ステップのときは白の番 */
		color = WHITE;
		printf( "White's turn\n" );
	}

	printf( "Input cell (x y)\n" );
	scanf( "%d %d", &x, &y );
	x--; y--;  /* 配列番号が0番から始まるため． */

	// 課題２　すでに石がある位置には石を新たに石を置けなくする。
	if (o->board[x][y] != EMPTY) {
		printf("すでに石が置かれています。 %d\n", *step);
		*step -= 1;
	} else {
		o->board[x][y] = color; /* 選んだマスに石を置く */
	}
}


/* 基本的に main 関数の中をいじる必要はありません．
   盤面のサイズを変えたい場合は 8 の部分を好きな数字に変更してください．*/
int main (int argc, char **argv){
	int i;
	//課題７　盤面のサイズを実行時オプションで与える。
	int board_size = 8;
	for (i=1; i<argc; i++) {
        if (strcmp(argv[i], "-n") == 0 && i+1 < argc) {
            board_size = atoi(argv[++i]);
        }
    }

	struct view view={512,512,}, *v=&view; /* おまじない (ウィンドウ) */
	struct othello othello_instance={board_size,{2,2},{0,0},NULL}, *o=&othello_instance; /* 8はボードの列(行)数．*/

	/* ボード作成(2次元配列の確保) */
	o->board = (int**)malloc( sizeof(int*) * o->n );
	for( i=0; i<o->n; i++ ){
		o->board[i] = (int*)malloc(sizeof(int) * o->n );
	}


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
