#include <stdio.h>
int main()
{
    int x=8,y=0;
    printf("%d\t%d\t%d\t%d\t%d\n",++x,y=++x,y=x+1,y++,x++);//从右到左运算

    printf("%10d\n%10d\n",x--&&(x+y),y++?y:-y);/*序列点之前所有变量值的改变必须完成,且上面的函数里我们已经对y重新赋值*/

    printf("%d\t%o\t%x\n",0x196bLL,0X196BUL,014553L);
    //%d表示接受整型并表示为十进制整数 ; %o表示接受无符号八进制整数且不输出前缀0 ;  %x表示接受16进制整数且不输出前缀0

    printf("%c\t%d\t%c\t%d\t%c\t\"\n",'\'','\x27','\134','\\','"');
    /*单引号内的单引号字符(')和反斜线字符(\)必须用（字符或数字）转义字符序列表示;
    %c表示字符型格式符，可以输出字符（按ASCII码转化);
    双引号(")作为字符常量时既可以用图形符号表示又可以用转义序列表示.*/

    printf("%s\11%c\x9%d\n\0","abc\0ABC",'\0','\0');
    //字符常量'\0'是值为0的字符，称为空字符，不引起任何控制动作也不显示字符，其通常用来表示一个字符串结束。

    printf("\n\\n causes a line feed to occur");

    printf("\n\\\"causes a double quote (\") to be printed");

    printf("\n\"\\t\" can be used to align some tab");

    printf("columns \n\t1\t2\t3\n\t4\t5\t6\n");

    printf("\\\t\"\\t'\n");

    printf("%c\t%d\t%d\t%d\t%d\t%d\n",97+3/5,sizeof(3/5),sizeof(3/5ULL),sizeof(3./5),sizeof((float)3./5),sizeof((double)3./5));
    //这里涉及整型常量和浮点型常量，整型常量为[前缀]整数部分[后缀]，无后缀为int；浮点型常量为[整数部分].[小数部分][后缀]或[整数部分][.][小数部分]e[+-]n[后缀]，无后缀表示double类型。

    int a=1,c[10];
    printf("%d\t%d\n",sizeof(a++),sizeof(c));/*sizeof的运算在编译时执行，编译时分析a++类型，而运行时不会对其求值；数组c占用的字节数为40*/
    printf("%d\n",a);

    return 0;

}
