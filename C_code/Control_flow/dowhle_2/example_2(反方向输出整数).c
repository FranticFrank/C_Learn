#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    do
    {
        putchar(x%10+'0');
    } while ((x/=10)!=0);//表达式作为运算符的操作数执行
    printf("\n");
    return 0;
    /* while(x!=0){
        putchar(x % 10+'0');
        x /=10;
    }
    printf("\n"); */
} 