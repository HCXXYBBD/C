#include<stdio.h>

typedef struct Stu
{
    char name[20];
    int age;
    char id[9];
    char sex[5];
}Stu;


int main()
{
    Stu s={"欧阳崇治",18,"213200554","男"};
    printf("姓名：%s\n",s.name);
    printf("年龄：%d\n",s.age);
    printf("学号：%s\n",s.id);
    printf("性别：%s\n",s.sex);
    printf("\n\n");
    printf("s：%p\n",s);
    printf("姓名：%p\n",s.name);
    printf("年龄：%p\n",s.age);
    printf("学号：%p\n",s.id);
    printf("性别：%p\n",s.sex);
}