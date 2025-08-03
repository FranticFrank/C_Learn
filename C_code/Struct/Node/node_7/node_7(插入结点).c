#include <stdio.h>
#include <stdlib.h>
#include "intnode.h"
void printList(struct intNode *head);
struct intNode *insertNode(struct intNode **head_p, int x)
{
    struct intNode *p, *last = NULL, *new;
    new = (struct intNode *)malloc(sizeof(struct intNode)); // 创建一个结点
    new->data = x;
    if (*head_p == NULL)
    { // 空链表
        *head_p = new;
        new->next = NULL;
        return new;
    }
    p = *head_p;
    while (x > p->data && p->next != NULL)
    { // 寻找插入位置
        last = p;
        p = p->next;
    }
    if (p == *head_p && x <= p->data) // 不能写成if(p == *head_p),这样第二个结点的data永远在第一个结点的data之前
    {
        new->next = *head_p;
        *head_p = new;
    }
    else if (x <= p->data)
    { // 插入点是链中
        new->next = p;
        last->next = new;
    }
    else
    { // 新结点成为链尾
        new->next = NULL;
        p->next = new;
    }
    return new;
}
int main()
{
    struct intNode *head = NULL;
    int x;
    printf("输入整数,以0结束.\n");
    scanf("%d", &x);
    while (x)
    {
        insertNode(&head, x);
        scanf("%d", &x);
    }
    printList(head);
    return 0;
}

void printList(struct intNode *head)
{
    struct intNode *p; /* 用于遍历链表的指针称为遍历指针 */
    p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next; /* 移动p指向下一个数据,不能使用p++,因为链表中的元素不连续 */
    }
}