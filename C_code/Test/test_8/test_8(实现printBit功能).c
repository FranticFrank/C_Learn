#include<stdio.h>
void printBit(int x)//以二进制输出int数据
{
    int i;
    int n=sizeof(int)*8;//n表示int类型数据的位数
    int mask=1<<(n-1);//最高位为1其余位为0的逻辑尺
    for(i=1; i<=n; ++i)
    {
        putchar(!(x& mask)? '0':'1');//输出最高位数字符
        x<<=1;//将x左移一位
        if (!(i%8) && i<n) putchar(' ');//每隔八位输出一个空格
    }
}


int main()
{
    int a;
    scanf("%d",&a);
    printBit(a);
    return 0;
}

