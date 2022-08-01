#include "game.h"

//在棋盘上随机生成10个雷
//'*'代表雷
//' '代表安全
void init_board(char board[ROW + 2][COL + 2])
{
    int i = 0;
    int j = 0;
    int n = 0;
    //初始化地雷棋盘
    for (i = 0; i < ROW + 2; i++)
    {
        for (j = 0; j < COL + 2; j++)
        {
            board[i][j] = ' ';
        }
    }
    //行号
    for (i = 1; i < ROW + 1; i++)
    {
        board[i][0] = i + '0';
    }
    //列号
    for (j = 1; j < COL + 1; j++)
    {
        board[0][j] = j + '0';
    }
    //装地雷
    for (n = 0; n < MINE; n++)
    {
        while (1)
        {
            i = (rand() % ROW) + 1;
            j = (rand() % COL) + 1;
            if (board[i][j] == ' ')
            {
                board[i][j] = '*';
                break;
            }
        }
    }
}

void init_show(char show[ROW + 2][COL + 2])
{
    int i = 0;
    int j = 0;
    int n = 0;
    //初始化展示棋盘
    for (i = 0; i < ROW + 2; i++)
    {
        for (j = 0; j < COL + 2; j++)
        {
            show[i][j] = ' ';
        }
    }
    //行号
    for (i = 1; i < ROW + 1; i++)
    {
        show[i][0] = i + '0';
    }
    //列号
    for (j = 1; j < COL + 1; j++)
    {
        show[0][j] = j + '0';
    }
}

void display(char board[ROW + 2][COL + 2])
{
    int i = 0;
    int j = 0;
    //打印地雷棋盘
    for (i = 0; i < ROW + 2; i++)
    {
        for (j = 0; j < COL + 2; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < COL + 1)
                printf("|");
        }
        printf("\n");
        if (i < ROW + 1)
        {
            for (j = 0; j < COL + 2; j++)
            {
                printf("---");
                if (j < COL + 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void find_mine(char board[ROW + 2][COL + 2], char show[ROW + 2][COL + 2])
{
    int x = 0;
    int y = 0;
    int count = (ROW * COL) - MINE;
    while (count > 0)
    {
        printf("请输入你要排查的位置坐标:>");
        scanf("%d%d", &x, &y);
        if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
        {
            if (board[x][y] == '*')
            {
                printf("很遗憾，你被炸死了!\n");
                display(board);
                break;
            }
            else
            {
                cal_mine_num(board, show, x, y);
                display(show);
                count--;
            }
        }
        else
        {
            printf("输入的坐标非法!\n");
        }
    }
    if (count == 0)
    {
        printf("恭喜你,排雷成功!\n");
        display(board);
    }
}

void cal_mine_num(char board[ROW + 2][COL + 2], char show[ROW + 2][COL + 2], int x, int y)
{
    int i = 0;
    int j = 0;
    int count = 0;
    for (i = x - 1; i <= x + 1; i++)
    {
        for (j = y - 1; j <= y + 1; j++)
        {
            if (board[i][j] == '*')
                count++;
        }
    }
    show[x][y] = count + '0';
    if (count == 0)
    {
        for (i = x - 1; i <= x + 1; i++)
        {
            for (j = y - 1; j <= y + 1; j++)
            {
                if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
                {
                    if (show[i][j] == ' ')
                    {
                        int a = 0;
                        int b = 0;
                        a = i;
                        b = j;
                        cal_mine_num(board, show, a, b);
                    }
                }
            }
        }
    }
}