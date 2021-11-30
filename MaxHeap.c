//
// Created by lenovo on 2021/11/26.
//

#define MaxSize 1000
#include <stdio.h>

typedef struct HeapStruct *MaxHeap;
struct HeapStruct{
    int arr[MaxSize];
    int Size;
    int Capacity;
};

