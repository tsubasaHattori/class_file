// おまじないファイル2
#ifndef __VIEW_OTHELLO_h
#define __VIEW_OTHELLO_h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include <X11/Xlib.h> /* X11 Libraly */
#include <X11/Xutil.h>

//////////////////// Othello part
#define EMPTY (-1)
#define WHITE (0)
#define BLACK (1)
#define CANPUT (2)

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

struct othello{
	int n;
	int score[2];
	int pass_flag[2];
	int **board;
	int algo;
};

// myothelloのプロトタイプ宣言
void myothello( int *step, struct othello *o );

// ボードを初期化する関数
void init_othello( struct othello *o );

/////////////////// Visualization part
/* View */
struct view{
	int			w, h;
	int			screen_number;
	long		event_mask;
	Display*	display;
	Window		parent, window;
	Pixmap		pixmap;
	GC			gc;
	Colormap	cmap;
	XColor		color;
	XEvent		event;
};

void view_init( struct view *v );


void view_out( struct view *v );
void view_draw( struct view *v, void *a );
void view_loop( struct view *v, struct othello *o );

void can_put(int board_size, int can_put_board[][board_size], int max_result[], int color, struct othello *o);
void reverse(int x, int y, int color, struct othello *o);
void algo_4619072(int *x, int *y, int max_result[]);

#endif
