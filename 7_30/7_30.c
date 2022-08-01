#include <stdio.h>

int main()
{
    // printf("%d",sizeof(int*));
    // printf("%d",sizeof(char*));
    // printf("%d",sizeof(short*));
    // printf("%d",sizeof(double*));

    int a = 5;
    int c = ++a;
    int b = ++c;
    int d = a++;
    printf("%d\t%d", b, d);
}