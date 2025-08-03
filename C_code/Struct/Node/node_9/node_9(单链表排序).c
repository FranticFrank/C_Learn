/* 交换结点数据域的单链表排序 */
void sortList_swapData(struct intNode *head)
{
    struct intNode*p,*tail;
    int tmp;
    for(tail=NULL;head!=tail;tail=p){
        for(p=head;p->next!=tail;p=p->next)
            if(p->data>p->next->data){
                tmp=p->data;
                p->data=p->next->data;
                p->next->data=tmp;
            }
    }
}

/* 交换节点的单链表排序 */
void sortList_swapNode(struct intNode **head_p)
{
    struct intNode *head,*p,*last,*tail;
    head = (struct intNode*)malloc(sizeof(struct intNode));
    head->next=*head_p;
    for(tail=NULL;head->next!=tail;tail=p){
        for(last=head,p=head->next;p->next!=tail;last=p,p==->next){
            if(p->data>p->next->data){/* 交换结点 */
                last->next=p->next;
                p->next=p->next->next;
                last->next->next=p;
                p=last->next;/* p回退一个结点 */
            }
        }
    }
    *head_p=head->next;
    free(head);
}
/* 
在这段代码中，新增头结点的目的是为了方便对链表进行排序操作。通过添加头结点，可以简化对链表头部的操作，并确保排序后的链表始终有一个头结点指向第一个节点。

具体来说，新增头结点的好处有几个：

1. 简化插入操作：在排序过程中，可能需要在链表头部插入新的节点。有了头结点，可以减少对头部插入的特殊情况的处理，并统一插入操作的逻辑。

2. 保持对链表头部的引用：在排序过程中，节点的位置可能会改变，但需要保持对链表头部的引用。新增头结点可以确保排序后的链表始终有一个指向第一个节点的引用，而不必担心头部节点是否发生变化。

3. 简化链表遍历：新增头结点可以使链表的头部操作与其他部分的操作更加统一，避免在特殊情况下需要额外的条件判断。

总之，新增头结点可以使链表的操作更加统一和简洁，提高代码的可读性和可维护性。
 */