//
// Created by lenovo on 2021/11/26.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct BNode *BinTree,*Position;
struct BNode{
    int data;
    BinTree Left;
    BinTree Right;
};
Position Find(int data,BinTree BST);
BinTree Insert(int data,BinTree BST);
/**
 * 要删除的结点有左右两颗子树；
 * 用另一结点替代被删除结点：右子树的最小元素 或者 左子树的最大元素
 * @param data
 * @param BST
 * @return
 */
BinTree Delete(int data,BinTree BST);

Position Find(int data,BinTree BST)
{
    if (!BST){
        printf("BST IS EMPTY");
    }
    if (data > BST->data)
        Find(data,BST->Right);
    else if (data < BST->data)
        Find(data,BST->Left);
    else
        return BST;
}

Position FindCircle(int data,BinTree BST){
    while (BST){
        if (data > BST->data)
            BST = BST->Right;
        else if (data < BST->data)
            BST = BST->Left;
        else
            return BST;
    }
    return NULL;
}

Position FindMin(BinTree BST){
    if (BST)
        return NULL;
    if (!BST->Left)
        return BST;
    else
        return FindMin(BST);
}

Position FindMax(BinTree BST){
    if (BST)
        return NULL;
    while (BST->Right){
        BST = BST->Right;
    }
    return BST;
}

/**
 *
 * @param data
 * @param BST  root of tree
 * @return  待插入的结点
 */
BinTree Insert(int data,BinTree BST)
{
    if (!BST){
        BST = (BinTree)malloc(sizeof(struct BNode));
        BST->data = data;
        BST->Left = NULL;
        BST->Right = NULL;
    } else {
        if (data > BST->data){
            BST->Right = Insert(data,BST->Right);
        } else if (data < BST->data){
            BST->Left = Insert(data,BST->Left);
        }
    }
    return BST;
}


BinTree Delete(int data,BinTree BST)
{
    BinTree  Tmp;
    if (!BST)
        printf("该节点未找到");
    else if (data > BST->data)
        BST->Right = Delete(data,BST->Right);
    else if (data < BST->data)
        BST->Left = Delete(data,BST->Left);
    else
    {
        // 找到该元素
        if (!BST->Left && !BST->Right){ /*若该结点无左右结点，直接删除该节点*/
            Tmp = BST;
            BST = NULL;
            free(Tmp);
        }else if (!BST->Left && BST->Right){ /*若该结点仅存在右节点，将其右节点替换该节点*/
            Tmp = BST;
            BST = BST->Right;
            free(Tmp);
        }else if (!BST->Right && BST->Left){/*若该结点仅存在左节点，将其右节点替换该节点*/
            Tmp = BST;
            BST = BST->Left;
            free(Tmp);
        } else /* 若该结点存在左右结点 在左子树中寻找最大的值填充 同时删除该结点*/
            Tmp = FindMax(BST->Left);
            BST->data = Tmp->data;
            BST->Left = Delete(BST->data,BST->Left);
    }
    return BST;

}

