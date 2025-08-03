#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
    double x;
    int n;
    if(argc!=3)
    {
        printf("argument error\n");
        exit(-1);
    }
    x = atof(argv[1]);/* 将第一个参数串转换为double类型 */
    n = atoi(argv[2]);/* 将第二个参数串转化为int类型 */
    printf("%f\n",pow(x,n));
    return 0;
}