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
// �ж���Ӯ
// 1.���Ӯ -- '*'
// 2.����Ӯ --'#'
// 3.�;� -- 'Q'
// 4.��Ϸ�������� -- 'C'
char is_win(char board[ROW][COL]);
