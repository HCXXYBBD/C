#include <stdio.h>

// int main()
// {
//     int a[5][5];
//     int(*p)[4];
//     p = a;
//     printf("%p %d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//     return 0;
// }

int main()
{
    char *c[] = {"ENTER", "NEW", "POINT", "FIRST"};
    char **cp[] = {c + 3, c + 2, c + 1, c};
    char ***cpp = cp;

    printf("%s\n", **++cpp);         // POINT  
    printf("%s\n", *--*++cpp + 3);   // ER
    printf("%s\n", *cpp[-2] + 3);    // ST  //cpp[-2]  等价于*(cpp-2)
    // 例如arr[1],arr是首元素地址，arr[1]是第二个元素的内容，arr+1表示第二个元素的地址，所以arr[1]等价于*(arr+1)
    // 同理，cpp[-2]等价于*(cpp-2);
    printf("%s\n", cpp[-1][-1] + 1); // EW
    return 0;
}