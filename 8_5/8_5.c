#include <stdio.h>
#include <string.h>
#include <assert.h>

// // 普通循环
// // char* reverse(char *arr)
// // {
// //     assert(arr);//断言保证指针的有效性
// //     int len = strlen(arr);
// //     char *left = arr;
// //     char *right = arr + len - 1;
// //     while (left < right)
// //     {
// //         //一次交换了一对
// //         char tmp = *left;
// //         *left = *right;
// //         *right = tmp;
// //         left++;
// //         right--;
// //     }
// //     return arr;
// // }

// // 递归
// char *reverse(char *arr)
// {
//     assert(arr); //断言保证指针的有效性
//     char *ret = arr;
//     int len = strlen(arr);
//     char *left = arr;
//     char *right = arr + len - 1;
//     if (left < right - 2)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = '\0';
//         left++;
//         // right--;
//         reverse(left);
//         *right = tmp;
//     }
//     else
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//     }
//     return ret;
// }

// int main()
// {
//     char arr[256] = {0};
//     printf("请输入字符串:>");
//     // scanf("%s", &arr);
//     gets(arr); //读取一行
//     //逆序函数
//     // reverse(arr);

//     printf("逆序后的字符串:>%s", reverse(arr));
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int i = 0;
//     int sum = 0;
//     int step = 0;
//     scanf("%d%d", &a, &b); // a+aa+aaa+aaa...aa(b个a)
//     for (i = 0; i < b; i++)
//     {
//         step = step * 10 + a;
//         sum += step;
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include <math.h>

// //求自幂数
// int check(int a)
// {
//     //判断i是否为自幂数
//     // 1.计算i的位数
//     int n = 1;
//     int step = a;
//     while (step /= 10)
//     {
//         n++;
//     }
//     // 2.假设为n位数，计算i的每一位的n次方之和 sum
//     step = a;
//     int sum = 0;
//     while (step)
//     {
//         sum += (int)pow(step % 10, n); // pow返回double类型
//         step /= 10;
//     }
//     // 3.比较sum和i，如i==sum则为自幂数
//     if (a == sum)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int i = 0;
//     printf("自幂数有:>");
//     for (i = 0; i < 100000; i++)
//     {
//         if (check(i))
//         {
//             printf("%d  ", i);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     //i的作用域只在for循环的{}内
//     // for (int i = 0; i < 100; i++)
//     // {
//     // }
//     // for (i = 0; i < 10; i++)
//     // {
//     // }

//     // int i = 0;
//     // for (i = 0; i < 100; i++)
//     // {
//     // }
//     // for (i = 0; i < 10; i++)
//     // {
//     // }
// }

void print(int n)
{
    //打印上半部分
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        //打印空格
        int j = 0;
        for (j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //打印下半部分
    for (i = 1; i <= n - 1; i++)
    {
        //打印空格
        int j = 0;
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * (n - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n = 0;
    printf("请输入你要打印菱形上半部分的行数:>");
    scanf("%d", &n);
    //菱形打印
    print(n);
}