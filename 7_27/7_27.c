#include <stdio.h>
#include <malloc.h>

// // typedef struct pillar
// // {
// //     char *list;
// // } pillar;

// // void lnit(int n, pillar x, pillar y, pillar z)
// // {
// //     // pillar x;
// //     x.list = (char *)malloc(n);
// //     // pillar y;
// //     y.list = (char *)malloc(n);
// //     // pillar z;
// //     z.list = (char *)malloc(n);
// //     int i = 0;
// //     for (i = 0; i < n; i++)
// //     {
// //         x.list[i] = i+'0';
// //         y.list[i] = '*';
// //         z.list[i] = '*';
// //     }
// // }

// // void print(int n, pillar x, pillar y, pillar z)
// // {
// //     int i = 0;
// //     for (i = 0; i < n; i++)
// //     {
// //         printf("%c\t%c\t%c\n", x.list[i], y.list[i], z.list[i]);
// //     }
// //     printf("x\ty\tz\n");
// // }

// void move(char pos1,char pos2)
// {
//     printf("%c->%c\t",pos1,pos2);
// }

// void hanoi(int n,char pos1,char pos2,char pos3)
// {
//     if(1==n)
//     {
//         move(pos1,pos3);
//     }
//     else
//     {
//         hanoi(n-1,pos1,pos3,pos2);
//         move(pos1,pos3);
//         hanoi(n-1,pos2,pos1,pos3);
//     }
// }

// int main()
// {
//     int n = 0;
//     // pillar x;
//     // pillar y;
//     // pillar z;
//     for(n=1;n<=3;n++)
//     {
//     //printf("请输入汉诺塔的阶数:>");
//     //scanf("%d", &n);
//     printf("\n%d阶汉诺塔:>\n", n);
//     hanoi(n, 'X', 'Y', 'Z');
//     }
//     // hanoi(n);

//     return 0;
// }

//八皇后问题：
// nxn的棋盘：
// n=1:
// 只有一个皇后，且皇后在（1，1）
// n=2:
// 只有一个皇后，且皇后在任一格内；
// n=3:
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     int d = 0;
//     int e = 0;
//     int f = 0;
//     int g = 0;
//     int h = 0;
//     for (; a < 8; a++)
//     {
//         b = 0;
//         for (; b < 8; b++)
//         {
//             c=0;
//             for (; c < 8; c++)
//             {
//                 d=0;
//                 for (; d< 8; d++)
//                 {
//                     e=0;
//                     for (; e < 8; e++)
//                     {
//                         f=0;
//                         for (; f < 8; f++)
//                         {
//                             g=0;
//                             for (; g < 8; g++)
//                             {
//                                 h=0;
//                                 for (; h < 8; h++)
//                                 {

//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     printf("%d\n",sizeof(char));
//     printf("%d\n",sizeof(int));
//     printf("%d\n",sizeof(short));
//     printf("%d\n",sizeof(long));
//     printf("%d\n",sizeof(long long));
// }


//冒泡排序
// int main(
// {
//     int arr[10] = {1, 3, 2, 4, 6, 5, 8, 9, 7, 0};
//     printf("未排序的arr[]:\n";
//     for (int i = 0; i < 10; i++
//     {
//         printf("%d ", arr[i];
//     }
//     bubble_sort(arr;

//     return 0;
// }

// int main()
// {
//     int arr[10] = {1, 3, 2, 4, 6, 5, 8, 9, 7, 0};
//     int a = 10;
//     // printf("%d\n",arr);
//     // printf("%d\n",arr[0]);
//     // printf("%d\n",&arr);
//     // printf("%p\n", arr);
//     // printf("%p\n", &arr[0]);
//     // printf("%p\n", &arr);
//     // printf("%p\n", arr + 1);
//     // printf("%p\n", &arr[0] + 1);
//     // printf("%p\n", &arr + 1);
//     // printf("%p\n", &(arr[0] + 1));
//     // printf("%d\n",(a);
//     // printf("%d\n",(&a);
// }