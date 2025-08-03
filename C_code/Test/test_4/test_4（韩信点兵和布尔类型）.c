#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int a,b,c,i;
    bool noanswer=true;
    printf("Please input a,b,c(a<3,b<5,c<7)\n");
    scanf("%d%d%d",&a,&b,&c);
    for(i=10; i<=100 && noanswer; ++i)
    {
        if(i%3==a&&i%5==b&&i%7==c)
        noanswer=false;
    }
    if(noanswer)
    printf("no answer\n");
    else
    printf("%d\n",i-1);

    //int a=10;
    //char str[]="H";
    //int arr[]= {1,2,3};
    //int len_a= sizeof(a);
    //int len_str=sizeof(str);
    //int len_arr=sizeof(arr);

    //printf("%d,%d,%d",len_a,len_str,len_arr);

    //char name[20];
    //int score;

    //printf("please input your name and score:\n");
    //scanf("%s%d",name,&score);
    //printf("%s, your score is %d!\n",name, score);
    return 0;


}