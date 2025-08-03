#include<stdio.h>
#include<math.h>
int isPrime(int x);
int isNarcissus(int m);
int main()
{
    int x;
    int i=0;
    for(x=100;x<=999;x++)
    {
        if(isNarcissus(x)&&isPrime(x))
        {
          i++;
          printf("%5d\t%d",x,i);
        }
        else i=i;
    }
    if(i==0)
    printf("1000以内没有素数是水仙花数\t%d",i);
    return 0;
}
int isNarcissus(int x)
{
    int i,j,k;
        i=x/100;
        j=(x-i*100)/10;
        k=x%10;

        if(x==i*i*i+j*j*j+k*k*k)
           return 1;
        else return 0;

}
int isPrime(int x)
{
    int flag,k,i;
    flag=1;
    k=sqrt(x);
    for(i=2;i<=k;i++)
        if(!(x%i))

        {
            flag=0;
            break;
        }
    return flag;
}