#include "function.h"

//int wpl = 0;

//前序遍历，也叫先序遍历，也是深度优先遍历
int PreOrder(BiTree p, int deep) {
    static int wpl = 0;//只会初始化一次
    if (p != NULL) {
//        printf("ele%c--%d\n", p->c,deep);
        if (p->lchild == NULL && p->rchild == NULL) {
            wpl = wpl + p->weight * deep;
        }
        PreOrder(p->lchild, deep + 1);//打印左子树
        PreOrder(p->rchild, deep + 1);//打印右子树
    }
    return wpl;
}

int main() {
    BiTree pnew;//用来指向新申请的树结点
    BiTree tree = NULL;//tree是指向树根的，代表树
    char c;
    ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur;
    //abcdefghij
    while (scanf("%c", &c)) {
        if (c == '\n') {
            break;//读取到换行就结束
        }
        //calloc申请的空间大小是两个参数直接相乘，并对空间进行初始化，赋值为0
        pnew = (BiTree) calloc(1, sizeof(BiTNode));
        pnew->weight = c;
        listpnew = (ptag_t) calloc(1, sizeof(tag_t));//给队列结点申请空间
        listpnew->p = pnew;
        //如果是树的第一个结点
        if (NULL == tree) {
            tree = pnew;//tree指向树的根结点
            phead = listpnew;//第一个结点既是队列头，也是队列尾
            ptail = listpnew;
            pcur = listpnew;//pcur要指向要进入树的父亲元素
        } else {
            //让元素先入队列
            ptail->pnext = listpnew;
            ptail = listpnew;
            //接下来把结点放入树中
            if (NULL == pcur->p->lchild) {
                pcur->p->lchild = pnew;//pcur->p左孩子为空，就放入左孩子
            } else if (NULL == pcur->p->rchild) {
                pcur->p->rchild = pnew;//pcur->p右孩子为空，就放入右孩子
                pcur = pcur->pnext;//当前结点左右孩子都有了，pcur就指向下一个
            }
        }
    }
    printf("----------PreOrder----------\n");//也叫先序遍历，先打印当前结点，打印左孩子，打印右孩子
    printf("wpl = %d\n", PreOrder(tree, 0));//wpl统计的是路径，因此一开始应该传入的是0
    return 0;
}
