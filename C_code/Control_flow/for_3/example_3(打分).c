#include<stdio.h>
#define N 7
int main(void)
{
    int x,max=0,min=100,sum=0,i;
    printf("please input the score:\n");
    for(i=1;i<=N;i++){
        scanf("%d",&x);
        sum+=x;
        if(x>max) max=x;
        if(x<max) min=x;
    }
    sum-=max+min;
    printf("the last score=%.lf\n",1.0*sum/(N-2));//注意要进行类型转换
    return 0;
}