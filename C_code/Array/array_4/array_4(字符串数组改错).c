/* 分析下列程序中的错误！ */
#include <stdio.h>
int main(void)
{
    char Capital[]="ABCDE",Lowercase[6];
    int i,j;
    int delta='a'-'A';
    for(i=0;i<5;i++){
        Lowercase[i]=Capital[i]+delta;
        //将大写转成小写存于Lowercase中
    }
    //运行完成后i==5
    for(j=0;j<5;j++){
        Capital[i+j]=Lowercase[j];
        //将数组Lowercase中的元素连接在Capital后面,注意前者的最后一个空字符此时被填充衔接上了
    }
    //运行完成后j==5
    Capital[i+j]='\0';
    printf("%s\n",Capital);
    printf("%s\n",Lowercase);
    return 0;
}
/* 
char Capital[]="ABCDE"没有指定数组大小,但是编译器自动计算其大小为6.
虽然在第二个 for 循环中越界访问了 Capital 数组.
但由于在内存中,Lowercase数组的存储空间紧随在Capital数组后面,程序在运行时并没有引发崩溃或其他异常.
但请注意,这种行为是不安全的,并且依赖于内存布局和编译器的具体实现，因此不能保证在所有情况下都能正常工作.
因此最开始要指定Capital大小,如char Capital[11]="ABCDE".
Lowercase中最好加上字符串终止符'\0',不过其中最后一个空闲空间被自动默认为'\0',这不影响程序运行.
*/
