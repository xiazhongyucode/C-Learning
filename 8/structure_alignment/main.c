#include <stdio.h>
struct student_type1{
    double score;//double是一种浮点类型，8个字节，浮点分为float和double，记住有这两种即可
    short age;
};

struct student_type2{
    double score;
    int height;
    short age;
};

struct student_type3{
    int height;
    char sex;
    short age;
};
//结构体对齐
int main() {
    printf("Hello, World!\n");
    return 0;
}
