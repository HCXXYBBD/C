#include <stdio.h>

// // void swap_1(int &a, int &b)
// // {
// //     int temp = 0;
// //     temp = *a;
// //     *a = *b;
// //     *b = temp;
// // }

// void swap_2(int* a,int* b)
// {
//     int temp=0;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("a=%d,b=%d\n", a, b);
//     //swap_1(&a, &b);
//      swap_2(&a,&b);
//     printf("a=%d,b=%d\n", a, b);
//     return 0;
// }

// int main()
// {
//     printf("%d", printf("%d", printf("%d", 43)));
//     return 0;
// }

// int fac(int n)
// {
//     if(n<=2){
//         return 1;
//     }
//     else{
//         return fac(n-1)+fac(n-2);
//     }
// }

int fac(int n)
{
    int a=1;int b=1; int c=0;
    int i=2;
    for(;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main()
{
    int n=0;
    printf("输入要输出第几个斐波那契数：>");
    scanf("%d",&n);
    printf("%d",fac(n));
}