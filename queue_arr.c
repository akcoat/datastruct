//
// Created by lenovo on 2021/11/25.
//
#include <stdio.h>
#define MAXSIZE 1000

typedef struct QNode *Queue;
struct QNode{
    int data[MAXSIZE];
    int front; // 指向队列的头部元素
    int rear;  // 指向队列的尾部元素
};


void AddQ(Queue PtrQ,int data){
    if ((PtrQ->rear+1)%MAXSIZE==PtrQ->front){
        printf("队列已满");
    }
    PtrQ->rear = (PtrQ->rear+1) % MAXSIZE;
    PtrQ->data[PtrQ->rear] = data;
}


int main(){

}