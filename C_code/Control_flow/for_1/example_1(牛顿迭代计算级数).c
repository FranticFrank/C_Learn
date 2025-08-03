#include<stdio.h>
#include<math.h>
#define EPS 1.0E-7

int main(void)
{
    int x;
    double s=0,x1=1,x2,limit;

    for(x=1;x<=10;x++)
    {
        do{
            x2=0.5*(x1+x/x1);
            limit=fabs(x2-x1);
            x1=(x2+x/x2)/2;/*不能写成1/2*(x2+x/x2)，因为1/2作为int类型结果是0，但可以把1/2放到后面此时会发生类型转换*/
        }while(limit>=EPS);/*用迭代计算sqrt*/
        s+=x1;
    }
    printf("s=%.8f\n",s);
    return 0;

}