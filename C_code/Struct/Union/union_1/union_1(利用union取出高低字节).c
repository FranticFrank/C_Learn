#include<stdio.h>
int main()
{
    union{
        short n;
        char a[2];
    } x={0x2030};
    int low,high;
    low=x.a[0];
    high=x.a[1];
    printf("low :%d\thigh :%d",low,high);
    return 0;
}
/* int main()
{
    short x=0x2030;
    short a=x&0x00FF;
    short b=(x&0xFF00)>>8;
    printf("low :%d\thigh :%d",a,b);
} */