#include<stdio.h>
#define PRINT_ARR(array,start,end) for(int i=start;i<=end;i++) \
printf("%d",array[i]);
int main()
{
    int a[5]={1,2,3,4,5};
    PRINT_ARR(a,0,4);//不必进行数据类型说明，可以是各种类型
    return 0;
}