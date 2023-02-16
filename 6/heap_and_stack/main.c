#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//堆和栈的差异
char *print_stack() {
    char c[100] = "I am print_stack func";
    char *p;
    p = c;
    puts(p);
    return p;
}

char *print_malloc() {//堆空间在整个进程中一直有效，不因为函数结束而消亡
    char *p = (char *) malloc(100);
    strcpy(p, "I am print_malloc func");
    puts(p);
    return p;
}

int main() {
    char *p;
    p = print_stack();
    puts(p);
    p = print_malloc();
    puts(p);
    free(p);//只有free时，堆空间才会释放
    return 0;
}
