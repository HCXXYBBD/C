//������
#include "game.h"
#include "game.h"

void menu()
{
    printf("********************************\n");
    printf("***  1.��ʼ��Ϸ  0.�˳���Ϸ  ***\n");
    printf("********************************\n");
}

void game()
{
    char flag = '0';
    char board[ROW][COL] = {0};
    init_board(board);
    display_board(board);
    //����
    while (1)
    {
        //�������
        player_move(board);
        display_board(board);
        //�ж���Ӯ
        flag = is_win(board);
        if (flag != 'C')
        {
            break;
        }
        //��������
        pc_move(board);
        display_board(board);
        //�ж���Ӯ
        flag = is_win(board);
        if (flag != 'C')
        {
            break;
        }
    }
    if (flag == '*')
    {
        printf("���ʤ��!\n");
    }
    else if (flag == '#')
    {
        printf("���ʧ��!\n");
    }
    else
    {
        printf("�;�!\n");
    }
}

void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����������ѡ��\n");
            break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}