#include<stdio.h>
#include<string.h>
#define N 9

void bubbleSort(int a[],int n)
{
    int t,i,j;
    for(i = 0;i<n-1;i++){
        for(j = 0;j<n-1-i;j++)
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        printf("%3d:",i+1);
        for(j=0;j<n;j++)/* 输出每一轮筛选后的元素排列情况 */
            printf("%d,",a[j]);
        printf("\n");
    }
}

int main()
{
    int ia[N]={};
    int i;
    printf("Please input numbers:\n");
    for(int k=0;k<N;k++)
        scanf("%d",&ia[k]);
    bubbleSort(ia,N);
    printf("end: ");
    for(i=0;i<N;i++)
        printf("%d",ia[i]);
    printf("\n");
    return 0;
}