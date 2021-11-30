//
// Created by lenovo on 2021/11/24.
//
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1000
typedef struct LNode  *List ;
struct LNode{
    int data ;
    List next;
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


int length(List L )
{
    int j = 0;
    List p = L;
    while (p){
        p = p->next;
        j++;
    }
    return j;
}

int  main(void ){

}
