//
// Created by lenovo on 2021/11/24.
//
#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1000
typedef struct GNode  *GList ;
struct GNode{
    int Tag ; /* 标志域： 0表示结点是单元素，1 表示结点是广义表*/
    union {
        int data;
        GList Sublist;
    };
    GList next;
};

int  main(void ){

}

