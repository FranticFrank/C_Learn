#include<stdio.h>
#include<stdlib.h>
#include"intnode.h"
struct intNode *createList(void);
void createList0(struct intNode **head_p);
void printList(struct intNode *head);
int main()
{
    struct intNode*head;
    //head=creatList();
    createList0(&head);
    printList(head);
    return 0;
}
struct intNode *createList()
{
    struct intNode *head,*p;
    int x;
    head = NULL;/* 链表开始为空 */
    printf("输入若干整数,以0结束\n");
    scanf("%d",&x);
    while(x)
    {
        p=(struct intNode *)malloc(sizeof(struct intNode));/* 建立新结点,开辟节点的存储空间 */
        p->data=x;/* 将数据存入新结点的数据域中 */
        p->next=head;/* 新结点指向原来的首结点 */
        head=p;/* 新结点为首结点,头指针指向新结点 */
        scanf("%d",&x);
    }
    return(head);
}
void printList(struct intNode *head)
{
    struct intNode *p;/* 用于遍历链表的指针称为遍历指针 */
    p=head;
    while(p!=NULL){
        printf("%d\t",p->data);
        p=p->next;/* 移动p指向下一个数据,不能使用p++,因为链表中的元素不连续 */
    }
}

void createList0(struct intNode **head_p)
{
    struct intNode *p;
    int x;
    *head_p = NULL;/* 链表开始为空 */
    printf("输入若干整数,以0结束\n");
    scanf("%d",&x);
    while(x)
    {
        p=(struct intNode *)malloc(sizeof(struct intNode));/* 建立新结点,开辟节点的存储空间 */
        p->data=x;/* 将数据存入新结点的数据域中 */
        p->next=*head_p;/* 新结点指向原来的首结点 */
        *head_p=p;/* 新结点为首结点,头指针指向新结点 */
        scanf("%d",&x);
    }
}