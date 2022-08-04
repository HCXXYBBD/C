#include <stdio.h>

// void test1(int **arr)
// {
//     printf("test1正确\n");
// }

// void test2(int (*arr)[5])
// {
//     printf("test2正确\n");
// }

// int main()
// {
//     int arr[3][5]={0};

//     test1(arr);
//     test2(arr);
//     return 0;
// }

//函数指针

// typedef void (*pfun_p)(int);

// void print(int a)
// {
//     printf("%d", a);
// }

// int main()
// {
//     void (*p)(int);
//     p = print;
//     printf("函数\n");
//     print(16);
//     printf("\n");
//     printf("指针\n");
//     (*p)(16);
//     printf("\n");
//     printf("类型重命名\n");
//     pfun_p p1;
//     p1 = &print;
//     p1(16);
//     printf("\n");
//     return 0;
// }

//函数指针数组练习

// char *my_strcpy(char *dest, const char *src);

// char *(*pf)(char *, const char *) = my_strcpy; //指针pf指向函数my_strcpy();
// char *(*pfArr[4])(char *, const char *) = {my_strcpy};

//简易计算器

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

//第一种 呆头鹅
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;
//     do
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);

//         switch (input)
//         {
//         case 1:
//             printf("请输入两个数:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Add(x, y));
//             break;
//         case 2:
//             printf("请输入两个数:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Sub(x, y));
//             break;
//         case 3:
//             printf("请输入两个数:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Mul(x, y));
//             break;
//         case 4:
//             printf("请输入两个数:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Div(x, y));
//             break;
//         case 5:
//             printf("请输入两个数:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", Xor(x, y));
//             break;
//         case 0:
//             printf("退出程序!!\n");
//             break;
//             default:
//             printf("选择错误!!\n");
//             break;

//         }
//     } while (input);
// }

//第二种,函数指针数组
// int main()
// {
//     int input = 0;
//     int x = 0;
//     int y = 0;
//     do
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);
//         int (*p[])(int, int) = {0, Add, Sub, Mul, Div, Xor};
//         if (input >= 1 && input <= 6)
//         {
//             printf("请输入两个数:>");
//             scanf("%d%d", &x, &y);
//             printf("%d\n", p[input](x, y));
//         }
//         else if (0 == input)
//         {
//             printf("退出程序！！\n");
//         }
//         else
//         {
//             printf("选择错误！！\n");
//         }
//     } while (input);
// }

//第三种 回调函数（通过函数指针调用的函数）
// void choose(int (*p)(int, int))
// {
//     int x = 0;
//     int y = 0;
//     printf("请输入两个数:>");
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
//         printf("请选择:>");
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
//             printf("退出程序!!\n");
//             break;
//         default:
//             printf("选择错误!!\n");
//             break;
//         }
//     } while (input);
// }

//使用回调函数写冒泡排序

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
    //趟数
    for (i = 0; i < sz - 1; i++)
    {
        int j = 0;
        //每一趟比较的对数
        for (j = 0; j < sz - 1 - i; j++)
        {
            //两元素比较,升序
            if (cmp((char *)base + j * width, (char *)base + width * (j + 1)) > 0)
            {
                //交换
                swap((char *)base + j * width, (char *)base + width * (j + 1), width);
            }
        }
    }
}

void test4()
{
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    //使用bubble_sort()函数的人肯定都知道排序的数据类型
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
    Stu s[3] = {{"张三", 20}, {"李四", 19}, {"王五", 22}};
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
    Stu s[3] = {{"张三", 20}, {"李四", 19}, {"王五", 22}};
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