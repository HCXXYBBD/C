#include <stdio.h>

// void test1(int **arr)
// {
//     printf("test1��ȷ\n");
// }

// void test2(int (*arr)[5])
// {
//     printf("test2��ȷ\n");
// }

// int main()
// {
//     int arr[3][5]={0};

//     test1(arr);
//     test2(arr);
//     return 0;
// }

//����ָ��

// typedef void (*pfun_p)(int);

// void print(int a)
// {
//     printf("%d", a);
// }

// int main()
// {
//     void (*p)(int);
//     p = print;
//     printf("����\n");
//     print(16);
//     printf("\n");
//     printf("ָ��\n");
//     (*p)(16);
//     printf("\n");
//     printf("����������\n");
//     pfun_p p1;
//     p1 = &print;
//     p1(16);
//     printf("\n");
//     return 0;
// }

//����ָ��������ϰ

// char *my_strcpy(char *dest, const char *src);

// char *(*pf)(char *, const char *) = my_strcpy; //ָ��pfָ����my_strcpy();
// char *(*pfArr[4])(char *, const char *) = {my_strcpy};

//���׼�����

// int Add(int a, int b)
// {
//     return a + b;
// }

// int Sub(int a, int b)
// {
//     return a - b;
// }

// int Mul(int a, int b)
// {
//     return a * b;
// }

// int Div(int a, int b)
// {
//     return a / b;
// }

// int Xor(int a, int b)
// {
//     return a ^ b;
// }

// void menu()
// {
//     printf("*****************************\n");
//     printf("*** 1.add           2.sub ***\n");
//     printf("*** 3.mul           4.div ***\n");
//     printf("*** 5.xor           0.exit***\n");
//     printf("*****************************\n");
// }

//��һ�� ��ͷ��
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;
//     do
//     {
//         menu();
//         printf("��ѡ��:>");
//         scanf("%d", &input);

//         switch (input)
//         {
//         case 1:
//             printf("������������:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Add(x, y));
//             break;
//         case 2:
//             printf("������������:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Sub(x, y));
//             break;
//         case 3:
//             printf("������������:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Mul(x, y));
//             break;
//         case 4:
//             printf("������������:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Div(x, y));
//             break;
//         case 5:
//             printf("������������:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Xor(x, y));
//             break;
//         case 0:
//             printf("�˳�����!!\n");
//             break;
//             default:
//             printf("ѡ�����!!\n");
//             break;

//         }
//     } while (input);
// }

//�ڶ���,����ָ������
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;
//     do
//     {
//         menu();
//         printf("��ѡ��:>");
//         scanf("%d", &input);
//         int (*p[])(int, int) = {0, Add, Sub, Mul, Div, Xor};
//         if (input >= 1 && input <= 6)
//         {
//             printf("������������:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", p[input](x, y));
//         }
//         else if (0 == input)
//         {
//             printf("�˳����򣡣�\n");
//         }
//         else
//         {
//             printf("ѡ����󣡣�\n");
//         }
//     } while (input);
// }

//������ �ص�������ͨ������ָ����õĺ�����
// void choose(int (*p)(int, int))
// {
//     int x = 0;
//     int y = 0;
//     printf("������������:>");
//     scanf("%d%d", &x, &y);
//     printf("%d\n", p(x, y));
// }

// int main()
// {
//     int input = 0;
//     int (*p)(int, int);
//     do
//     {
//         menu();
//         printf("��ѡ��:>");
//         scanf("%d", &input);
//         switch (input)
//         {
//         case 1:
//             choose(Add);
//             break;
//         case 2:
//             choose(Sub);
//             break;
//         case 3:
//             choose(Mul);
//             break;
//         case 4:
//             choose(Div);
//             break;
//         case 5:
//             choose(Xor);
//             break;
//         case 0:
//             printf("�˳�����!!\n");
//             break;
//         default:
//             printf("ѡ�����!!\n");
//             break;
//         }
//     } while (input);
// }

//ʹ�ûص�����дð������

#include <string.h>

typedef struct Stu
{
    char name[20];
    int age;
} Stu;

int cmp_int(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int cmp_name(const void *a, const void *b)
{
    return strcmp(((Stu *)a)->name, ((Stu *)b)->name);
}

int cmp_age(const void *a, const void *b)
{
    return (((Stu *)a)->age - ((Stu *)b)->age);
}

void swap(char *a, char *b, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        int tmp = 0;
        tmp = *a;
        *a = *b;
        *b = tmp;
        a++;
        b++;
    }
}

void bubble_sort(void *base, int sz, int width, int (*cmp)(const void *a, const void *b))
{
    int i = 0;
    //����
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        //ÿһ�˱ȽϵĶ���
        for (j = 0; j < sz - 1 - i; j++)
        {
            //��Ԫ�رȽ�,����
            if (cmp((char *)base + j * width, (char *)base + width * (j + 1)) > 0)
            {
                //����
                swap((char *)base + j * width, (char *)base + width * (j + 1), width);
            }
        }
    }
}

void test4()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    //ʹ��bubble_sort()�������˿϶���֪���������������
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void test5()
{
    Stu s[3] = {{"����", 20}, {"����", 19}, {"����", 22}};
    int sz = sizeof(s) / sizeof(s[0]);

    bubble_sort(s, sz, sizeof(s[0]), cmp_age);
    int i = 0;
    for (; i < 3; i++)
    {
        printf("%s %d\n", s[i].name, s[i].age);
    }
    printf("\n");
}

void test6()
{
    Stu s[3] = {{"����", 20}, {"����", 19}, {"����", 22}};
    int sz = sizeof(s) / sizeof(s[0]);

    bubble_sort(s, sz, sizeof(s[0]), cmp_name);
    int i = 0;
    for (; i < 3; i++)
    {
        printf("%s %d\n", s[i].name, s[i].age);
    }
    printf("\n");
}

int main()
{
    test4();
    test5();
    test6();
}