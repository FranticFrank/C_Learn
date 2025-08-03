#include<stdio.h>
enum week {MON=1,TUE,WED,THU,FRI,DAT,SUN};
int main(void)
{
    enum week day;
    char*weekName[]={"Input error","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    printf("请输入1~7的星期数字\n");
    while(scanf("%d",&day)==1){
        if(day>=1&&day<=7)
        printf("%s\n",weekName[day]);
        else printf("%s\n",weekName[0]);
    }
    return 0;
}