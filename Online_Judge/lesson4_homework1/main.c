#include <stdio.h>

int main() {
    int a=12321;
    int b=0,backup_a;
    backup_a=a;
    while (a){
        b=a%10;
        a=a/10;
        b=b+
    }
    //判断b和backup_a相等，就是对称数，如果不等，就不是对称数
    if(b==backup_a){
        printf("yes\n");
    } else{
        printf("no\n");
    }
    return 0;
}
