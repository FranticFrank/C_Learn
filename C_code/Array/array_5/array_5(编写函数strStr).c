# include<stdio.h>
# include<string.h>
int strStr(char s[],char t[])
{
    int j,k;
    for(j=0;s[j]!='\0';j++)
        if(s[j]==t[0]){
            k=1;
            while(s[j+k]==t[k]&&t[k]!='\0')
                k++;
            if(k==strlen(t))
                return j;
        }
        return -1;
}

int main()
{
    char s1[80]="C is the most widely used programming language.";
    char s2[]="use";
    int i,j=0;
    i = strStr(s1,s2);
    printf("the sub_string's beginning position is %d\n",i);
    while(j<i)
        putchar(s1[j++]);
    putchar('\n');
    while(putchar(s1[i++]));
        putchar('\n');
}
