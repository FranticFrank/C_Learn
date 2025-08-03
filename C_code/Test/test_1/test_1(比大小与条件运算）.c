#include<stdio.h>
//void show(char str[]);
signed int Max(signed int a, signed int b);

int main()
{
    /*char name[20];
    printf("Please input your name:\n");
    scanf("%s",name);
    show (name);
    return 0;*/
    signed int u,v,c,x;
    char s;
    scanf("%d%d %c",&u,&v,&s);//注意%c前面要加空格，因为前面有两个%d，防止混淆
    c=Max(u,v);
    printf("%d\n",c);
    printf("%c\n",(s>='a'&&s<='z')?(s-'a'+'A'):s);
    printf("%d\n",x=u>0?1:u<0?(-1.):0);
    return 0;

}
//void show( char str[])
signed int Max(signed int x,signed int y)
{
    //printf("Hello,%s!\n",str);
    return x>y ? x : y;

}