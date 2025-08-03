#include<stdio.h>

int main(void)
{
   /*计算s=1^1+2^2+3^3+4^4+...+n^n*/
    int i,j,n;
    long s,term;
    printf("input n:\n");
    scanf("%d",&n);
    for(s=0,i=1;i<=n;++i){
       term=1;
       j=1;
       
      /*  do
       {
          term*=i;
       } while (++j<=i); */
       
       for(;j<=i;j++)
       term*=i;
       
       s+=term;
    }
    printf("s=%ld\n",s);
    return 0;
       
}