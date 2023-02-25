//
// Created by 32335 on 2023/2/25.
//

#ifndef BINARY_TREE_FUNCTION_H
#define BINARY_TREE_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>

typedef char BiElemType;
typedef struct BiTNode {
    BiElemType c;//c就是书籍上的data
    struct BiTNode *lchild;
    struct BiTNode *rchild;
} BiTNode, *BiTree;
//tag结构体是辅助队列使用的
typedef struct tag {
    BiTree p;//树的某一个结点的地址值
    struct tag *pnext;
} tag_t, *ptag_t;

//队列的结构体
typedef BiTree ElemType;
typedef struct LinkNode{
    ElemType data;
    struct LinkNode *next;
}LinkNode;
typedef struct {
    LinkNode *front,*rear;//链表头 链表尾，也可以称为队头，队尾
}LinkQueue;//先进先出
void InitQueue(LinkQueue &Q);
bool IsEmpty(LinkQueue Q);
void EnQueue(LinkQueue &Q,ElemType x);
bool DeQueue(LinkQueue &Q,ElemType &x);
#endif //BINARY_TREE_FUNCTION_H
