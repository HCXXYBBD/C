//三子棋
#include "game.h"

void menu()
{
    printf("********************************\n");
    printf("              扫雷              \n");
    printf("********************************\n");
    printf("********   1.开始游戏   ********\n");
    printf("********   0.退出游戏   ********\n");
    printf("********************************\n");
}

void game()
{
    // char flag = '0';
    char board[ROW + 2][COL + 2] = {0}; //存储雷的位置
    char show[ROW + 2][COL + 2] = {0};  //显示的数组
    init_board(board);
    init_show(show);
    display(board);
    printf("\n");
    display(show);
    find_mine(board,show);
    
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
            // printf("开始游戏\n");
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