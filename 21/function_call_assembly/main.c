#include <stdio.h>

int add(int a, int b) {
    int ret;
    ret = a + b;
    return ret;
}

//指针的间接访问，函数调用，返回值
int main() {
    int a, b, ret;
    int *p;
    a = 5;
    p = &a;
    b = *p + 2;
    ret = add(a, b);
    printf("add result = %d\n", ret);
    return 0;
}
//gcc -m32 -masm=intel -S -fverbose-asm main.c
//得到机器码需要执行的指令：
//第一条：gcc -m32 -g -o main main.c (Mac一致)       gcc main.c -o main
//第二条：objdump --source main.exe>main.dump (Mac去掉.exe后缀，写为main即可)
