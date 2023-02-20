#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;//数据域
    struct LNode *next;//指针域333333
}LNode,*LinkList;

void list_head_insert(LinkList &L){
    L=(LinkList) malloc(sizeof(LNode));//给头指针申请空间
    L->next=NULL;
    ElemType x;
    LinkList s;
    scanf("%d",&x);
    while (x!=9999){
        s=(LinkList) malloc(sizeof(LNode));//给新结点申请空间
        s->data=x;//把读取到的数据放入新结点的数据域
        s->next=L->next;//让新结点指向原有链表的第一个结点
        L->next=s;//新结点成为第一个结点
        scanf("%d",&x);
    }
}

void PrintList(LinkList L){
    L=L->next;
    while (L!=NULL){
        printf("%d",L->data);//打印当前结点数据
        L=L->next;//指向下一个结点
        if(L!=NULL){
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    LinkList L;//链表头指针，代表链表
    return 0;
}
