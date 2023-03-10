#include <stdio.h>
//整型不同类型的演示，以及溢出演示
int main() {
    int i=10;
    short a=32767;
    short b=0;
    long c;//32位的程序是4个字节，64位的是8个字节
    b=a+1;//发生了溢出，解决溢出的办法是用更大的空间来存
    printf("%d\n",b);//b并不是32767
    return 0;
}
