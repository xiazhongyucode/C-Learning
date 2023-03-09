#include <stdio.h>
//自增自减运算符与取值运算符结合

int main() {
    int a[3] = {3, 7, 8};
    int *p;
    int j;
    p = a;//p指向数组起始元素
    j = *p++;//先把*p的值赋给j，然后对p加1。等价于语句j=*p;p++;
    printf("a[0] = %d, j = %d, *p = %d\n", a[0], j, *p);
    j = p[0]++;//先把p[0]赋给j，然后对p[0]加1。等价于语句j=p[0];p[0]++;
    printf("a[0] = %d, j = %d, *p = %d\n", a[0], j, *p);
    return 0;
}
