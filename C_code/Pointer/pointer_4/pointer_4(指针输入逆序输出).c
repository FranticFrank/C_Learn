#include<stdio.h>
#define N 10
int main(void)
{
    int a[N], *p;
    printf("Please enter %d numbers\n",N);
    for(p=a;p<a+N;p++)
        scanf("%d",p);
    while(--p>=a)//for循环结束后,p指向a[10],为了逆序输出数组元素,先将p回退a[9],因此使用前置式自减--p
        printf("%d",*p);
    return 0;
}