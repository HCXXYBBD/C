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
    Stu s={"ŷ������",18,"213200554","��"};
    printf("������%s\n",s.name);
    printf("���䣺%d\n",s.age);
    printf("ѧ�ţ�%s\n",s.id);
    printf("�Ա�%s\n",s.sex);
    printf("\n\n");
    printf("s��%p\n",s);
    printf("������%p\n",s.name);
    printf("���䣺%p\n",s.age);
    printf("ѧ�ţ�%p\n",s.id);
    printf("�Ա�%p\n",s.sex);
}