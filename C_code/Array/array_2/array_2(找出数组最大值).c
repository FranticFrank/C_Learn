#include<stdio.h>
void findMax(int score[],int);
int main()
{
    int score[9]={};
    printf("Please input 9 numbers:\n");
    for(int i=0;i<9;i++) scanf("%d\n",&score[i]);
    findMax(score,9);
    printf("The largest number among the 9 numbers is:%d\n",score[8]);
}

void findMax(int sc[],int n)
{
    int t,j;
    for(j=0;j<n-1;j++)
        if(sc[j]>sc[j+1]){
            t = sc[j];
            sc[j] = sc[j+1];
            sc[j+1] =t;
        }
}