#include <stdio.h>
#include <string.h>
#include <assert.h>

// // ��ͨѭ��
// // char* reverse(char *arr)
// // {
// //     assert(arr);//���Ա�ָ֤�����Ч��
// //     int len = strlen(arr);
// //     char *left = arr;
// //     char *right = arr + len - 1;
// //     while (left < right)
// //     {
// //         //һ�ν�����һ��
// //         char tmp = *left;
// //         *left = *right;
// //         *right = tmp;
// //         left++;
// //         right--;
// //     }
// //     return arr;
// // }

// // �ݹ�
// char *reverse(char *arr)
// {
//     assert(arr); //���Ա�ָ֤�����Ч��
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
//     printf("�������ַ���:>");
//     // scanf("%s", &arr);
//     gets(arr); //��ȡһ��
//     //������
//     // reverse(arr);

//     printf("�������ַ���:>%s", reverse(arr));
//     return 0;
// }

// int main()
// {
//     int a = 0;
//     int b = 0;
//     int i = 0;
//     int sum = 0;
//     int step = 0;
//     scanf("%d%d", &a, &b); // a+aa+aaa+aaa...aa(b��a)
//     for (i = 0; i < b; i++)
//     {
//         step = step * 10 + a;
//         sum += step;
//     }
//     printf("%d",sum);
//     return 0;
// }

// #include <math.h>

// //��������
// int check(int a)
// {
//     //�ж�i�Ƿ�Ϊ������
//     // 1.����i��λ��
//     int n = 1;
//     int step = a;
//     while (step /= 10)
//     {
//         n++;
//     }
//     // 2.����Ϊnλ��������i��ÿһλ��n�η�֮�� sum
//     step = a;
//     int sum = 0;
//     while (step)
//     {
//         sum += (int)pow(step % 10, n); // pow����double����
//         step /= 10;
//     }
//     // 3.�Ƚ�sum��i����i==sum��Ϊ������
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
//     printf("��������:>");
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
//     //i��������ֻ��forѭ����{}��
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
    //��ӡ�ϰ벿��
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        //��ӡ�ո�
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
    //��ӡ�°벿��
    for (i = 1; i <= n - 1; i++)
    {
        //��ӡ�ո�
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
    printf("��������Ҫ��ӡ�����ϰ벿�ֵ�����:>");
    scanf("%d", &n);
    //���δ�ӡ
    print(n);
}