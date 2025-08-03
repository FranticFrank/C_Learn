struct intNode *createList3()
{
    struct intNode *head,*p;
    int x;
    head=NULL;
    scanf("%d",&x);
    if(x){
        p=(struct intNode*)malloc(sizeof(struct intNode));
        p->data=x;
        head=p;/* 使第一个结点变成链头 */
        p->next=createList3()
    }
    return head;
}

void createList4(struct intNode **head_p)
{
    struct intNode *p;
    int x;
    *head_p=NULL;
    if(x){
        p=(struct intNode*)malloc(sizeof(struct intNode));
        p->data=x;
        *head_p=p;
        createList4(&p->next);
    }
}