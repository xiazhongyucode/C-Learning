#include <stdio.h>

struct student {
    int num;
    char name[20];
    char sex;
};

//结构体指针的练习
int main() {
    struct student s = {1001, "wangle", 'M'};
    struct student sarr[3] = {1001, "lilei", 'M', 1005, "zhangsan", 'M', 1007, "lili", 'F'};
    struct student *p;//定义了一个结构体指针变量
    p = &s;
    printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);//方式1访问通过结构体指针去访问成员
    printf("%d %s %c\n", p->num, p->name, p->sex);//方式2访问通过结构体指针去访问成员，用这种
    p = sarr;
    printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);//方式1访问通过结构体指针去访问成员
    printf("%d %s %c\n", p->num, p->name, p->sex);//方式2访问通过结构体指针去访问成员，用这种
    printf("------------------------------\n");
    p = p + 1;
    printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);//方式1访问通过结构体指针去访问成员
    printf("%d %s %c\n", p->num, p->name, p->sex);//方式2访问通过结构体指针去访问成员，用这种
    return 0;
}
