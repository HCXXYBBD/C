#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_board(char board[ROW][COL]);
void display_board(char board[ROW][COL]);
void player_move(char board[ROW][COL]);
void pc_move(char board[ROW][COL]);
int is_full(char board[ROW][COL]);
// 判断输赢
// 1.玩家赢 -- '*'
// 2.电脑赢 --'#'
// 3.和局 -- 'Q'
// 4.游戏继续进行 -- 'C'
char is_win(char board[ROW][COL]);
