#include<stdio.h>
//void print_bin(int n);
#define LOWER 00ull
#define UPPER 200.F
#define STEP 10.//预处理指令

int main(void)
{
    int fahr;
    /*int LOWER=0;
    int UPPER=200;
    int STEP=10;*/
/*也可以用关键字const定义符号常量，要注明类型区分符以分配存储单元:
    const unsigned long long int LOWER=0;
    const float UPPER=200.OOOOOOO;
    const double STEP=10;*/

    for( fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP)
        printf("%3d:%10.6f\n",fahr,((float)5/9)*(fahr-32));/*不能写成（5/9),因为5/9接受为整型0,这里是强制类型转换，也可以写成5./9或5/9.*/
        //%10.6d是指输出宽度为10且保留6位小数
    return 0;
}
    /*int a=10;
    char c1="a";
    print_bin(c1);
    printf("\n");
    return 0;

void print_bin(int n)
{
    int i;
    for (i=sizeof(n)*8-1;i>=0;i--)
    {
        if (n&(1<<i)){
            printf("1");
        }
        else
            printf("0");

    }
}*/