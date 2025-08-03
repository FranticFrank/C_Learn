int deleteNode(struct intNode **head_p,int x)
{
    struct intNode *p,*last;
    p = *head_p;
    while(p->data!=x&&p->next!=NULL){
        last=p;
        p=p->next;
    }
    if(p->data==x){
        if(p==*head_p)
            *head_p=p->next;
        else
            last->next=p->next;
        free(p);
        return 1;
    }
    else return 0;
}