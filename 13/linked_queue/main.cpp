#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode;
typedef struct {
    LinkNode *front,*rear;//链表头 链表尾，也可以称为队头，队尾
}LinkQueue;//先进先出
//队列的初始化，使用的是带头结点的链表来实现的
void InitQueue(LinkQueue &Q){
    Q.front=Q.rear=(LinkNode*) malloc(sizeof(LinkNode));
    Q.front->next=NULL;
}
//通过链表来实现队列
int main() {
    LinkQueue Q;
    InitQueue(Q);//初始化队列
    return 0;
}
