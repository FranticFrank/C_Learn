#include<stdio.h>
int sum(int x);
int main(void)
{
    int c,nc,nl;
    int n=10;
    printf("%d\n",sum(n));

    printf("Input a text end of Ctrl+Z:\n");
    nc=nl=0;
    while((c=getchar())!=EOF)//getchar函数遇文件尾时返回EOF
    {
        nc++;//字符数加一，可用++nc替代
        if(c=='\n')
        ++nl;
    }
    printf("nc=%d,nl=%d\n",nc,nl);
    return 0;
    /*回车键和空格键等控制字符也会计算在内；
    最后输入ctrl+z时一定要在行首输入*/
}
int sum(int n)
{
    int i,s;
    s=i=0;
    while(++i<=n)
        s=s+i;
    //printf("%d\n",s);
    return s;
}