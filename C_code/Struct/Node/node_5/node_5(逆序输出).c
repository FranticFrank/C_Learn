void reversePrintList(struct intNode *head)
{
    struct intNode *p=head;
    if(p!=NULL){
        reversePrintList(p->next);
        printf("%d\t",p->data);
    }
}