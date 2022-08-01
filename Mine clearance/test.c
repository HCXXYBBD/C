//������
#include "game.h"

void menu()
{
    printf("********************************\n");
    printf("              ɨ��              \n");
    printf("********************************\n");
    printf("********   1.��ʼ��Ϸ   ********\n");
    printf("********   0.�˳���Ϸ   ********\n");
    printf("********************************\n");
}

void game()
{
    // char flag = '0';
    char board[ROW + 2][COL + 2] = {0}; //�洢�׵�λ��
    char show[ROW + 2][COL + 2] = {0};  //��ʾ������
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
        printf("��ѡ��:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            // printf("��ʼ��Ϸ\n");
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