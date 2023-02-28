#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef int ElemType;
typedef struct {
    ElemType *elem;
    int TableLen;
} SSTable;

void ST_Init(SSTable &ST, int len) {//申请空间，并进行随机数生成
    ST.TableLen = len;
    ST.elem = (ElemType *) malloc(sizeof(ElemType) * ST.TableLen);
    int i;
    srand(time(NULL));
    for (i = 0; i < ST.TableLen; i++) {
        ST.elem[i] = rand() % 100;
    }
}

void ST_print(SSTable ST) {
    for (int i = 0; i < ST.TableLen; i++) {
        printf("%3d", ST.elem[i]);
    }
    printf("\n");
}

void swap(ElemType &a, ElemType &b) {
    ElemType tmp;
    tmp = a;
    a = b;
    b = tmp;
}

//把某个子树调整为大根堆
void AdjustDown1(ElemType A[], int k, int len) {
    int dad = k;//父亲的下标
    int son = 2 * dad + 1;//左孩子的下标
    while (son < len) {
        if (son + 1 < len && A[son] < A[son + 1]) {//如果左孩子小于右孩子
            son++;//拿右孩子
        }
        if (A[son] > A[dad]) {//如果孩子大于父亲
            swap(A[son], A[dad]);//交换
            dad = son;//son从新作为dad，去判断下面的子树是否符合大根堆
            son = 2 * dad + 1;
        } else {
            break;
        }
    }
}

void HeapSort1(ElemType A[], int len) {
    int i;
    //就是把堆，调整为大根堆
    for (i = len / 2 - 1; i >= 0; i--) {
        AdjustDown1(A, i, len);
    }
    swap(A[0],A[len-1]);//交换根部元素和最后一个元素
    for(i=len-1;i>0;i--){//i代表的是剩余的无序数的数组的长度
        AdjustDown1(A,0,i);//调整剩余元素变为大根堆
        swap(A[0],A[i-1]);
    }
}

int main() {
    SSTable ST;
    ST_Init(ST, 10);//初始化
    //下面两行为了降低调试难度，每次数组数据固定而设计的
    ElemType A[10] = {3, 87, 2, 93, 78, 56, 61, 38, 12, 40};
    memcpy(ST.elem, A, sizeof(A));
    ST_print(ST);
//    HeapSort(ST.elem, 9);//王道书零号元素不参与排序，考研考的都是零号元素要参与排序
    HeapSort1(ST.elem, 10);//所有元素参与排序
    ST_print(ST);
    return 0;
}
