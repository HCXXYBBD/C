#include <stdio.h>

// // int main()
// // {
// //     int a = 0;
// //     int b = 0;
// //     int c = 0;
// //     int d = 0;
// //     int e = 0;

// //     for (a = 1; a <= 5; a++)
// //     {
// //         for (b = 1; b <= 5; b++)
// //         {
// //             for (c = 1; c <= 5; c++)
// //             {
// //                 for (d = 1; d <= 5; d++)
// //                 {
// //                     for (e = 1; e <= 5; e++)
// //                     {
// //                         if ((b == 2) + (a == 3) == 1 &&
// //                             (b == 2) + (e == 4) == 1 &&
// //                             (c == 1) + (d == 2) == 1 &&
// //                             (c == 5) + (d == 3) == 1 &&
// //                             (e == 4) + (a == 1) == 1)
// //                         {
// //                             // if ((a + b + c + d + e) == 15)
// //                             if ((a * b * c * d * e) == 120)
// //                             {
// //                                 printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
// //                             }
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //     }
// // }

// // int main()
// // {
// //     char str1[] = "hello world.";
// //     char str2[] = "hello world.";
// //     char *str3 = "hello world.";
// //     char *str4 = "hello world.";
// //     if(str1==str2)
// //     {
// //         printf("str1 等于 str2\n");
// //     }
// //     else
// //     {
// //         printf("str1 不等于 str2\n");
// //     }
// //     if(str3==str4)
// //     {
// //         printf("str3 等于 str4\n");
// //     }
// //     else
// //     {
// //         printf("str3 不等于 str4\n");
// //     }

// //     return 0;
// // }

//
// 左旋字符串中的k个字符

#include <assert.h>
#include <string.h>

// // 暴力求解法
// // void left_move(char *arr, int n)
// // {
// //     assert(arr);
// //     int i = 0;
// //     int len = strlen(arr);
// //     for (i = 0; i < n; i++)
// //     {
// //         //左旋一位
// //         char tmp = *arr;
// //         int j = 0;
// //         for (j = 0; j < len - 1; j++)
// //         {
// //             *(arr + j) = *(arr + j + 1);
// //         }
// //         *(arr + len - 1) = tmp;
// //     }
// // }

// void reverse(char *left, char *right)
// {
//     assert(left != NULL);
//     assert(right != NULL);
//     while (left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// //三步翻转法
// // abcdef
// // bafedc 分别翻转两边
// // cdefab 总体再翻转
// void left_move(char *arr, int n)
// {
//     assert(arr);
//     int len = strlen(arr);
//     reverse(arr, arr + n - 1);       //逆序左边
//     reverse(arr + n, arr + len - 1); //逆序右边
//     reverse(arr, arr + len - 1);     //逆序整体
// }

// // int is_left_move(char *s1, char *s2)
// // {
// //     int len = strlen(s1);
// //     int i = 0;
// //     for (i = 0; i < len; i++)
// //     {
// //         left_move(s1, 1);
// //         if (!strcmp(s1, s2))
// //         {
// //             return 1;
// //         }
// //     }
// //     return 0;
// // }

// // 比较abcdef与cdefab是否为旋转后的字符串
// //先将abcdef延长变为abcdefabcdef
// //再将cdefab和延长后的字符串abcdefabcdef作比较，不相同则向后移动一位，找到匹配的则return 1；若一直重复本身字符串长度次数后，仍未找到则return 0；
// int is_left_move(char *s1, char *s2)
// {
//     int len1 = strlen(s1);
//     int len2 = strlen(s2);
//     //两字符串长度不等一定不会是左移得来的
//     if (len1 != len2)
//     {
//         return 0;
//     }
//     // 1.字符串s1后追加一个s1
//     // strcat 不能用于字符串自己给自己追加
//     // strcat(s1,s1);error  char* strcat(char* strDestination,const char* strSourse)

//     // strncat
//     // strncat(s1,s1);  char* strcat(char* strDestination,const char* strSourse,size_t count)//追加count个字符
//     strncat(s1, s1, len1);

//     // 2.判断s2是否为s1指向字符串的子串
//     // strstr 找子串，找到返回地址，没找到返回空指针
//     char *ret = strstr(s1, s2);
//     if (ret == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// // int main()
// // {
// //     char arr[] = "abcdef";
// //     left_move(arr, 4);
// //     printf("%s\n", arr);
// //     return 0;
// // }

// int main()
// {
//     char arr1[30] = "abcdef";
//     char arr2[] = "cdef";
//     if (is_left_move(arr1, arr2))
//     {
//         printf("arr1 是 arr2 左移后的字符串\n");
//     }
//     else
//     {
//         printf("arr1 不是 arr2 左移后的字符串\n");
//     }
//     return 0;
// }

//有一个数字矩阵，矩阵每一行从左往右递增，矩阵每一列从上往下递增，
//请编写程序在这样的矩阵查找某个数字是否存在
//时间复杂度小于O(n);

// int find_num(int arr[3][3], int k, int row, int col)
// {
//     int x = 0;
//     int y = col - 1;
//     while (x <= row - 1 && y >= 0)
//     {
//         if (arr[x][y] > k)
//         {
//             y--;
//         }
//         else if (arr[x][y] < k)
//         {
//             x++;
//         }
//         else
//         {
//             return 1;
//         }
//     }
//     //找不到
//     return 0;
// }

//找到时可返回坐标
int find_num(int arr[3][3], int k, int *row, int *col)
{
    int x = 0;
    int y = *col - 1;
    while (x <= *row - 1 && y >= 0)
    {
        if (arr[x][y] > k)
        {
            y--;
        }
        else if (arr[x][y] < k)
        {
            x++;
        }
        else
        {
            *row = x;
            *col = y;
            return 1;
        }
    }
    //找不到
    return 0;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 9; //要寻找的元素
    int row = 3;
    int col = 3;
    int ret = find_num(arr, k, &row, &col);
    if (1 == ret)
    {
        printf("找到了,坐标为(%d,%d)\n", row, col);
    }
    else
    {
        printf("找不到\n");
    }
    return 0;
}