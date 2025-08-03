#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,k,r;
    while(1){
        scanf("%d",&n);
    if (n==2)
        printf("2 is a prime\n");
    else
    {
        i=1;
        k=sqrt(n);
        do{
            ++i; r=n%i;
        }while(r&&i<=k);
        if(r)
          printf("%d is a prime.\n",n);
        else
          printf("%d isn't a prime.\n",n);
    }
    }
    return 0;
}
