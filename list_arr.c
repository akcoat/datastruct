//
// Created by lenovo on 2021/11/24.
//
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1000
typedef struct LNode  *List ;
struct LNode{
    int arr[MAXSIZE] ;
    int last;
};
/**
 * 初始化一个空线性表
 * @return
 */
List MakeEmpty();
/**
 * 根据位序K ，返回相应元素
 * @param K
 * @param L
 * @return
 */
int FindKth(int K , List L);
/**
 * 在线性表L中查找X的第一次出现位置
 * @param X
 * @param L
 * @return
 */
int find(int X,List L);
/**
 * 在位序i前插入一个新元素X
 * @param x
 * @param i
 * @param L
 */
void Insert(int x,int i,List L);
//删除指定位序的元素
void Delete(int i ,List L);
// 返回线性表L 的长度
int length(List L );



List MakeEmpty(){
    List ptrl;
    ptrl = (List)malloc(sizeof (struct LNode));
    ptrl -> last = -1;
    return ptrl;
}

int find(int K ,List L){
    int i = 0;
    while ( i <= L->last && K != L -> arr[i]){
        i++;
    }
    if (i > L->last){
        return -1 ;
    } else{
        return  i;
    }
}

void Insert(int x,int i ,List L){
    // 判断数组是否已经满
    if (L->last +1 == MAXSIZE){
        printf("数组已满");
    }
    // 判断 i 是否合法
    if (i < 1 || i > L ->last +1){
        printf("i  不合法");
    }

    // 将i-1 后面的元素通通向后移动
    for (int j = L->last; j >= i-1  ; j --) {
        L->arr[j+1] = L->arr[j];
    }
    L->arr[i-1] = i;
    L->last++;
}

void Delete(int i ,List L){
    // 判断i的合法性
    if (i < 1 || i > L ->last +1){
        printf("i  不合法");
    }
    // 将 i-1 后面的元素向前移动
    for (int j = i-1; j <= L->last;j++) {
        L->arr[j] = L->arr[j+1];
    }
    L->last--;
}
int  main(void ){

}
