#include <stdio.h>
#include <string.h>
//字符串翻转，翻转后比较与原字符串是否相等
//windows下使用VS的集成开发环境的同学，不能使用gets，直接使用char c[100]; fgets(c,sizeof(c),stdin)等价于gets(c)
//使用增量编写法
int main() {
    char array[100];//原字符串
    char reverse_array[100]={0};//翻转后的字符串，初始化的目的是为了d有结束符
    gets(array);
    int len= strlen(array);
    for(int i=len-1,j=0;j<len;i--,j++){
        reverse_array[j]=array[i];
    }
//    puts(array);
//    puts(reverse_array);
    int result= strcmp(array,reverse_array);
    if(result<0){
        printf("%d\n",-1);
    }else if(result>0){
        printf("%d\n",1);
    } else{
        printf("%d\n",0);
    }
    return 0;
}
