/*模拟scanf("%lld",&x)的功能*/

#include<stdio.h>
int main()
{
    char c;/*用于存放当前输入并读取的字符*/
    long long int x,y;/*用于存放转化的字符*/
    printf("请输入数字字符：\n");
    for (x=0,c=getchar();c>='0'&&c<='9';c=getchar())
    {
        x=x*10+c-'0'; /*c-'0'将数字字符转换为对应整数*/
    }
    printf("x=%lld\n",x);/*这里的%lld表示long long类型，%d只能表示into类型*/
    return 0;
    
}