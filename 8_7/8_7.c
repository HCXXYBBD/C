// #include <stdio.h>

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
// //         printf("str1 ���� str2\n");
// //     }
// //     else
// //     {
// //         printf("str1 ������ str2\n");
// //     }
// //     if(str3==str4)
// //     {
// //         printf("str3 ���� str4\n");
// //     }
// //     else
// //     {
// //         printf("str3 ������ str4\n");
// //     }

// //     return 0;
// // }

// //
// // �����ַ����е�k���ַ�

// #include <assert.h>
// #include <string.h>

// // ������ⷨ
// // void left_move(char *arr, int n)
// // {
// //     assert(arr);
// //     int i = 0;
// //     int len = strlen(arr);
// //     for (i = 0; i < n; i++)
// //     {
// //         //����һλ
// //         char tmp = *arr;
// //         int j = 0;
// //         for (j = 0; j < len - 1; j++)
// //         {
// //             *(arr + j) = *(arr + j + 1);
// //         }
// //         *(arr + len - 1) = tmp;
// //     }
// // }
// //������ת��
// // abcdef
// // bafedc �ֱ�ת����
// // cdefab �����ٷ�ת

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

// void left_move(char *arr, int n)
// {
//     assert(arr);
//     int len = strlen(arr);
//     reverse(arr, arr + n - 1);       //�������
//     reverse(arr + n, arr + len - 1); //�����ұ�
//     reverse(arr, arr + len - 1);     //��������
// }

// int is_left_move(char *s1, char *s2)
// {
//     int len = strlen(s1);
//     int i = 0;
//     for (i = 0; i < len; i++)
//     {
//         left_move(s1, 1);
//         if (!strcmp(s1, s2))
//         {
//             return 1;
//         }
//     }
//     return 0;
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
//     char arr1[] = "abcdef";
//     char arr2[] = "cdefac";
//     if(is_left_move(arr1, arr2))
//     {
//         printf("arr1 �� arr2 ���ƺ���ַ���\n");
//     }
//     else
//     {
//         printf("arr1 ���� arr2 ���ƺ���ַ���\n");

//     }
//     return 0;
// }