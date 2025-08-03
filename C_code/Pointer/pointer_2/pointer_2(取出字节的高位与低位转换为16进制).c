#include<stdio.h>
int main(void)
{
    long x,k;
    printf("请输入整数x:");
    scanf("%d",&x);
    printf("x的十六进制为:");
    char *p=(char *)&x;
    char up_half,low_half;//up_half存储高四位low_half存储低四位
    p+=3;
    for(k=0;k<4;k++)//循环处理4字节数据
    {
        low_half=(*p)&0x0f;//取低四位
        if(low_half<10)
            low_half|='0';
        else
            low_half=(low_half-10)+'A';
        up_half=(*p>>4)&0x0f;//取高四位
        if(up_half<10)
            up_half|='0';
        else
            up_half=(up_half-10)+'A';
        p--;
        printf("%c%c ",up_half,low_half);
    }
    return 0;
}