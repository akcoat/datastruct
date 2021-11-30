//
// Created by lenovo on 2021/11/25.
//
/**
 * 采用链表的形式  儿子兄弟表示法
 * *********************************
 * *          ElementType          *
 * *********************************
 *   FirstChile   *  NextSibling   *
 * *********************************
 */
/**
 *  中序遍历非递归遍历算法
 *  遇到一个结点，将其压栈，并去遍历它的左子树
 *  当左子树遍历结束后，从栈顶弹出这个元素并访问它；
 *  然后按其右指针再去中序遍历该结点的右子树
 *
 *  层序遍历
 *  队列实现：
 *  遍历从根节点开始，首先将根节点入队，然后开始执行循环：
 *  结点出队，访问该结点,其左右儿子入队
 */

#include <stdio.h>
typedef struct TreeNode *BinTree;
typedef BinTree Position;
struct TreeNode{
    int data;
    BinTree Left;
    BinTree Right;
};

void PreOrderTraversal(BinTree binTree)
{
    if (binTree){
        printf("%d\n",binTree->data);
        PreOrderTraversal(binTree->Left);
        PreOrderTraversal(binTree->Right);
    }

}
