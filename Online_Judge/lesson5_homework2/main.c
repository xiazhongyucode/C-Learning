#include <stdio.h>
#include <string.h>

int main() {
    char array[100];
    char reverse_array[100];
    int len;
    int result;
    gets(array);
    len= strlen(array);
    for(int i=len-1,j=0;j<=len-1;i--,j++){
        reverse_array[j]=array[i];
    }
    puts(array);
    puts(reverse_array);
    result= strcmp(array,reverse_array);
    if(result<0){
        printf("%d\n",-1);
    }else if(result>0){
        printf("%d\n",1);
    } else{
        printf("%d\n",0);
    }
    return 0;
}
