/*一位同学做好事不留名
A说:不是我;
B说:是C;
C说:是D;
D说:他胡说;
有三位同学说真话，一位同学说假话，请问是谁做的好事*/
#include<stdio.h>
int main()
{
    char thisman;
    for(thisman='A';thisman<='D';thisman++)
    {
        if((thisman!='A')+(thisman=='C')+(thisman=='D')+(thisman!='D')==3)
        {
            printf("%c\n",thisman);
            break;
        }
    }
    return 0;
}