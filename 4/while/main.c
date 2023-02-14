#include <stdio.h>

//计算从1到100的和
int main() {
    int i = 1, total = 0;
    while (i <= 100) {//在这里加分号会造成死循环
        total = total + i;//把i加到total上
        i++;//i++;等价于i+=1;在循环体内没有让while判断表达式趋于假的操作，就会造成死循环
    }
    printf("total = %d\n", total);
    return 0;
}
