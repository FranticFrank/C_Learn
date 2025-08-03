#include<stdio.h>
#include<time.h>
#define N 1000
void mysRand(unsigned);
unsigned myRand(void);
int main()
{
    int i,head=0,reverse=0;
    //sleep(0.01);
    mysRand(time(NULL));
    for(i=0;i<N;i++)
    {
        if(myRand()%2)
        head++;
        else reverse++;
    }
    printf("\n%d %d\n",head,reverse);
    return 0;
}