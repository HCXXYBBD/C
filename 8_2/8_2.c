#include<stdio.h>

// int main()
// {
//     //�жϱ������Ĵ洢��ʽ
//     int a=1;
//     char* p=(char*)&a;
//     if(1==*p)
//     {
//         printf("С��\n");
//     }
//     else
//     {
//         printf("���\n");
//     }
// }

// int check_sys()
// {
//     int a=1;
//     char* p=(char*)&a;
//     return *p;
// }

// int check_sys()
// {
//     int a=1;
    
//     return *(char*)&a;
// }

// int main()
// {
//     int flag=check_sys();
//     if(1==flag)
//     {
//         printf("С��\n");
//     }
//     else
//     {
//         printf("���\n");
//     }
// }

// int main()
// {
//     char a=-1;
//     signed b=-1;
//     unsigned char c =-1;
//     printf("a=%d b=%d c=%d",a,b,c);
//     return 0;
// }


// int main()
// {
//     char a=-128;
    
//     printf("a=%u",a);
//     return 0;
// }

#include<string.h>

int main()
{
    char a[1000];
    for(int i=0;i<1000;i++)
    {
        a[i]=-1-i;
    }
    printf("%d",strlen(a));
}