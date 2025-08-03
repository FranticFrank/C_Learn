/* 这个问题具备递推关系，可以考虑用递推的思想，从底层开始构建，将复杂问题回归到简单情形 */
#include<stdio.h>
int main()
{
    int i,j,n,num,N;
    char tab[N];
    int ins[]={1,3,7,8};//每次从盒子中取出的球的数目是1、3、7、8.
    scanf("%d",&N);

    while(1)
    {
        for(tab[0]=1,i=1;i<N;i++)
            tab[i]=0;
        for(i=1;i<N;i++)
        {
            if(tab[i]==0)
                for(j=0;j<4;j++)
                    if((num=i+ins[j])<N)
                        tab[num]=1;
        }
        scanf("%d",&n);
        if(n < 0) // Check if input is negative, indicating termination
            break; // Exit the loop
        printf("%d\n",tab[n]);
    }
    return 0;
}
