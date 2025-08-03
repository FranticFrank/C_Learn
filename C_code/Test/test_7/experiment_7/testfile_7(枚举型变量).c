#include<stdio.h>
enum week {MON=2,TUE, WEN, THU, FRI, SAT, SUN};//声明枚举类型
int main()
{
    enum week day;//利用枚举名定义枚举变量day
    //int day;
    char*weekname[]={"Input error!","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};//用字符指针数组存放星期表
    printf("请输入1~7的星期数字\n");
    while(scanf("%d",&day)==1)//scanf函数的返回值是正确输入变量的个数
    {
        if(day>=1&&day<=7)
            printf("%s\n",weekname[day]);
        else
            printf("%s\n",weekname[0]);
    }
    return 0;
}