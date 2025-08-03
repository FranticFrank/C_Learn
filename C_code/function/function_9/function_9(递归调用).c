#include<stdio.h>
int f1(char *pc)
{
    if(*pc) return 1+f1(pc+1);
    return 0;
}
char *f2(char *pa,char *pb)
{
    if(*pa=*pb) f2(pa+1,pb+1);
    return pa;
}
char *f3(char *pa,char *pb)
{
    if(*pa)
        f3(pa+1,pb);
    else
        f2(pa,pb);
    return pa;
}
int main()
{
    char a[20]="0123",b[20]="abc";
    int c=f1(a);
    printf("%d\n",c);
    if(c%2) printf("%s",f2(a,b));
    else printf("%s",f3(a,b));
    return 0;
}