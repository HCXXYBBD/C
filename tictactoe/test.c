//三子棋
#include "game.h"
#include "game.h"

void menu()
{
    printf("********************************\n");
    printf("***  1.开始游戏  0.退出游戏  ***\n");
    printf("********************************\n");
}

void game()
{
    char flag = '0';
    char board[ROW][COL] = {0};
    init_board(board);
    display_board(board);
    //下棋
    while (1)
    {
        //玩家下棋
        player_move(board);
        display_board(board);
        //判断输赢
        flag = is_win(board);
        if (flag != 'C')
        {
            break;
        }
        //电脑下棋
        pc_move(board);
        display_board(board);
        //判断输赢
        flag = is_win(board);
        if (flag != 'C')
        {
            break;
        }
    }
    if (flag == '*')
    {
        printf("玩家胜利!\n");
    }
    else if (flag == '#')
    {
        printf("玩家失败!\n");
    }
    else
    {
        printf("和局!\n");
    }
}

void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}