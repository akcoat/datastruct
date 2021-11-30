//
// Created by lenovo on 2021/11/24.
//
#include <stdio.h>
#define MAXSIZE  1000
typedef struct SNode *Stack;
struct SNode{
    int data[MAXSIZE];
    int top;
};
void Push(Stack PtrS,int item);


/*具体实现*/
void Push(Stack PtrS,int item)
{
    // judge stack is full or not
    if (PtrS->top == MAXSIZE-1){
        printf("stack is full");
    }
    PtrS->data[PtrS->top+1] = item;
    PtrS->top++;
}

