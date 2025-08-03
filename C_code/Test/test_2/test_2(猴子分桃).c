#include<stdio.h>
#include<stdbool.h>/*bool,true,false在其中定义*/
int main()
{
    int n,i,x;
    bool flag = true;
    for(n=6;flag;n++)/*采用试探的方法，令试探的值n逐步变大*/
    {
        for(x=n,i=1;flag&&i<=5;i++)/*取定一个n，对i进行循环*/
        {
            if((x-1)%5==0)
            {
                x=4*(x-1)/5;
            }
            else flag=false;/*此时下一个if函数会对flag赋值为true，使程序进入n循环*/
        }
        if(flag)/*如果i循环后的flag值仍是true，则对n的循环结束*/
        {
            break;
        }
        else flag=true;/*如果i循环后flag的值为false，则此后再次进行对n的循环*/
    }
    printf("%d,%d\n",n,x);
}