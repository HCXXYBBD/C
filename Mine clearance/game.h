#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define MINE 10
void init_board(char board[ROW + 2][COL + 2]);
void init_show(char show[ROW + 2][COL + 2]);
void display(char board[ROW + 2][COL + 2]);
void find_mine(char board[ROW + 2][COL + 2], char show[ROW + 2][COL + 2]);
void cal_mine_num(char board[ROW + 2][COL + 2], char show[ROW + 2][COL + 2], int x, int y);