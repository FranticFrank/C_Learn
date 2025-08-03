#include<stdio.h>
void secondToTime(int sec);/* 函数原型 */
extern int h,m,s;/* 外部变量的引用性说明 */
int main()
{
    int second;
    printf("Please input number:");
    scanf("%d",&second);
    secondToTime(second);
    printf("%d:%d:%d",h,m,s);
    return 0;
}