#include<stdio.h>
char *myStrTok(char *s,const char *delim)
{
    static char *last=NULL;
    int found=0;
    char *tok;
    const char *bak=delim;
    if(s==NULL) s=last;
    else last=s;
    for(;*s;s++){
        for(delim=bak;*delim;delim++){
            if(*s==*delim){
                *s='\0';
                found=1;
                break;
            }
        }
        if(found){
            if(s==last){
                last++;
                found=0;
            }
            else{
                tok=last;
                last=++s;
                return tok;
            }
        }
    }
    if(last==s) return NULL;
    tok=last;
    last=s;
    return tok;
}
int main()
{
    int c=0,i;
    char buf[]="string";
    char *p[20];
    p[c++]=myStrTok(buf," ,");
    while((p[c]=myStrTok(NULL," ,"))!=NULL)
        c++;
    for(i=0;i<c;i++){
        if(!(i%3)) printf("\n");
        printf("%10s",p[i]);
    }
    return 0;
}