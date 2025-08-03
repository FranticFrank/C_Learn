#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,k,m;

    for(k=0,n=2;n<100;++n)
    {
        for(i=2,m=1;i<=sqrt(n);++i)

            if(!(m=n%i))   
            break;
        if(m)
        {
            printf("%6d",n);
            if(!(++k%8))  printf("\n");
        }
    }

    return 0;
}
