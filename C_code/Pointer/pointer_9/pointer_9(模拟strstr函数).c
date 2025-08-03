#include<stdio.h>
#include<string.h>
char *myStrstr(char *str,char *substr)
{
    char *pstr, *psub, *res;
    for(;*str!='\0';str++){
        res=str;
        for(pstr=str,psub=substr;*pstr!='\0';pstr++,psub++)
            if(*pstr!=*psub) break;
        if(*psub=='\0') return res;
    }
    return NULL;
}
int main()
{
    char *strSource="Don't judge each day by the harvest you reap but by the seeds that you plant.";
    char *strFind="you",*p=strSource;
    int count=0,len;
    len=strlen(strFind);
    while((p=myStrstr(p,strFind))!=NULL){
        printf("%s\n",p);
        p+=len;
        count++;
    }
    printf("出现%d次\n",count);
    return 0;
}