#include<stdio.h>
#include<math.h>
#define EPS 1e-6
int main(void)
{
    double x,d;
    scanf("%lf",&x);
    do{
        d=-((((3*x-4)*x)-5)*x+13)/((9*x-8)*x-5);
        x+=d;
    }while(fabs(d)>EPS);
    /*for(d=-((((3*x-4)*x)-5)*x+13)/((9*x-8)*x-5);fabs(d)>EPS;x+=d)
    d=-((((3*x-4)*x)-5)*x+13)/((9*x-8)*x-5);*/
    printf("x=%f\n",x);
    return 0;
}