struct intNode *createList1()
{
    struct intNode *head,*tail,*p;
    int x;
    head=NULL;/* 链表开始为空 */
    tail=NULL;/* 尾指针初值为空 */
    scanf("%d",&x);
    while(x){
        p=(struct intNode *)malloc(sizeof(struct intNode));/* 生成新结点 */
        p->data=x;
        if(head==NULL)
            head=p;/* 首结点插入空表 */
        else
            tail->next=p;/* 其余结点插入尾部 */
        tail=p;/* 新结点作为尾结点 */
        scanf("%d",&x);
    }
    if(tail!=NULL)/* 对于非空表,将尾结点指针域置空 */
        tail->next=NULL;
    return head;
}

creatList2(**head_p)
{
    struct intNode *tail,*p;
    int x;
    *head_p=NULL;/* 链表开始为空 */
    tail=NULL;/* 尾指针初值为空 */
    scanf("%d",&x);
    while(x){
        p=(struct intNode *)malloc(sizeof(struct intNode));/* 生成新结点 */
        p->data=x;
        if(*head_p==NULL)
            *head_p=p;/* 首结点插入空表 */
        else
            tail->next=p;/* 其余结点插入尾部 */
        tail=p;/* 新结点作为尾结点 */
        scanf("%d",&x);
    }
    if(tail!=NULL)/* 对于非空表,将尾结点指针域置空 */
        tail->next=NULL;
}
