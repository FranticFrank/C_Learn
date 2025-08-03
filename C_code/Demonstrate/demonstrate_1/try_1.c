#include <stdio.h>
/*void change (int value[])
{
    value[0]=88;
    value[1]=99;
    value[2]=100;
}*/

void printArray1(int values[]);
void printArray2(int values[],int length);

int main()
{
    /*printf("%d\n",-1>1U);*/



    /*char ch1,ch2,ch3,ch4;
    scanf("%c %c",&ch1,&ch2);
    getchar();
    scanf("%c%c",&ch3,&ch4);
    printf("ch1=%c,ch2=%c,ch3=%c,ch4=%c",ch1,ch2,ch3,ch4);*/
    int nums[]={1,2,3,4,5,6,7,8,9,10};
    /*change(&nums[1]);
    printf("nums[0]=%d\n",nums[0]);
    printf("nums[0]=%d\n",nums[1]);
    printf("nums[0]=%d\n",nums[2]);
    printf("nums[0]=%d\n",nums[3]);*/

    printArray1(nums);
    printf("---------------\n");
    int length=sizeof(nums)/sizeof(nums[0]);
    printArray2(nums,length);
    

    return 0;
}

void printArray1(int values[])
{
    int length=sizeof(values)/sizeof(values[0]);
    //这里的values是一个地址（指针），sizeof（values）总是8；
    printf("lengthValues=%d\n",length);
    for(int i=0;i<length;i++)
        printf("values[%d]=%d\n",i,values[i]);
}

void printArray2(int values[], int length)
{
    printf("length=%d\n",length);
     for(int i=0;i<length;i++)
        printf("values[%d]=%d\n",i,values[i]);
}
