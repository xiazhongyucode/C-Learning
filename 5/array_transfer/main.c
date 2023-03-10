#include <stdio.h>

//数组的传递
//子函数把某一个常用功能，封装起来的作用
//数组名传递到子函数后，子函数的形参接收到的是数组的起始地址，因此不能把数组的长度传递给子函数
void print(int a[], int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%3d", a[i]);
    }
    a[3] = 20;//在子函数中修改数组元素
    printf("\n");
}

//main函数就是主函数
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    print(a, 5);//数组在传递给子函数时，它的长度传递不过去
    printf("a[3] = %d\n", a[3]);//a[3]发生改变
    return 0;
}
//调试按钮
//折弯 F8 当前函数一步一步往下走
//向下箭头 F7 到达某个函数，要进入自己的子函数时使用
