/* 将两个升序单链表归并成一个升序单链表 */
struct intNode *mergeList(struct intNode *head1,struct intNode *head2)
{
    struct intNode *head,*tail;/* head是新链表的头指针,tail是尾指针 */
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    if(head1->data<head2->data){/* head指向两个链表中的最小元素 */
        head=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        head2=head2->next;
    }
    tail=head;/* 尾指针始终指向新链表的 */
/* 将两个升序链表结点数据值一次对比,添加到新链表,同时改变原链表结点和头指针 */
    while(head1!=NULL&&head2!=NULL){
        if(head1->data<head2->data){
            tail->next=head1;
            head1=head1->next;
        }
        else{
            tail1->next=head2;
            head2=head2->next;
        }
        tail=tail->next;
    }
    if(head1!=NULL) tail->next=head1;
    else if(head2!=NULL) tail->next=head2;
    return head;
}