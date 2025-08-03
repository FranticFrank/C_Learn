#include<stdio.h>
void MonthDay(int year,int yearDay,int *pMonth,int *pDay)
{
    static int dayTab[][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
    };
    int i,leap;

    leap=(((year%4==0)&&(year%100!=0))||(year%400==0));
    for(i=1;yearDay>dayTab[leap][i];i++)
        yearDay-=dayTab[leap][i];
    *pMonth=i;
    *pDay=yearDay;
}
int main()
{
    int year,month,day,yearDay;
    printf("Please input the year and the days of the year.\n");
    scanf("%d %d",&year,&yearDay);
    MonthDay(year,yearDay,&month,&day);
    printf("It is %d month and %d day in %d.\n",month,day,year);
    return 0;
}