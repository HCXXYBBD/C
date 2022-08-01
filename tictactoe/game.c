#include "game.h"

void init_board(char board[ROW][COL])
{
    int i = 0;
    int j = 0;
    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < ROW; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void display_board(char board[ROW][COL])
{
    int i = 0;
    int j = 0;
    printf("���̵ķ�Χ��((1,1)--(%d,%d))\n", ROW, COL);
    for (i = 0; i < ROW; i++)
    {

        for (j = 0; j < COL; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < (COL - 1))
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < (ROW - 1))
        {
            for (j = 0; j < COL; j++)
            {
                printf("---");
                if (j < (COL - 1))
                {
                    printf("|");
                }
            }
        }
        printf("\n");
    }
}

void player_move(char board[ROW][COL])
{
    int a = 0;
    int b = 0;
    printf("�ֵ���Ļغ��ˣ���������Ҫ���ӵ�����:>");
    //�ж���������ĺϷ���
    while (1)
    {
        scanf("%d%d", &a, &b);
        if (a <= ROW && a > 0 && b <= COL && b > 0)
        {
            if (board[a - 1][b - 1] == ' ')
            {
                board[a - 1][b - 1] = '*';
                break;
            }
            else
            {
                printf("��λ�������ӣ���������������:>");
            }
        }
        else
        {
            printf("�����Χ�������̷�Χ����������������:>");
        }
    }
}

void pc_move(char board[ROW][COL])
{
    int a = 0;
    int b = 0;
    printf("�����ǵ��ԵĻغϣ�");
    while (1)
    {
        a = rand() % ROW;
        b = rand() % COL;

        if (board[a][b] == ' ')
        {
            board[a][b] = '#';
            break;
        }
    }
}
int is_full(char board[ROW][COL])
{
    int i = 0;
    int j = 0;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}

char is_win(char board[ROW][COL])
{
    int i = 0;
    int flag = 0;
    //�ж�����
    for (i = 0; i < ROW; i++)
    {
        if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][0] != ' ')
        {
            return board[i][0];
        }
    }
    //�ж�����
    for (i = 0; i < COL; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
        {
            return board[0][i];
        }
    }
    //�ж�б�Խ���
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
    {
        return board[0][2];
    }
    //�ж��Ƿ�ƽ��
    flag = is_full(board);
    if (flag)
    {
        return 'Q';
    }
    else
    {
        return 'C';
    }
}