#include<stdio.h>
int main(void)
{
    long long f1=1,f2=1;
    int i=1;
    while(i<=30)
    {
        printf("f(%d)=%lld\tf(%d)=%lld\n",(2*i-1),f1,i*2,f2);
        f1=f1+f2;
        f2=f2+f1;
        i++;
    }
    return 0;
}