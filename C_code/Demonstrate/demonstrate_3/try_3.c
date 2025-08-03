#include<stdio.h>
int main()
{


/*     printf("Size of int pointer: %zu bytes\n", sizeof(int*));
    printf("Size of char pointer: %zu bytes\n", sizeof(char*));
    printf("Size of float pointer: %zu bytes\n", sizeof(float*));
    printf("Size of double pointer: %zu bytes\n", sizeof(double*));
    return 0 */;

    /* %zu 是 C 语言中的格式化字符串，用于输出 size_t 类型的值。
    size_t 是一个无符号整数类型，通常用于表示内存大小和数组索引等非负整数。
    在输出 size_t 类型的值时，使用 %zu 可以确保输出正确的大小。 */




    /* int a,b[10]={};
    int*p=b;
    int**p1=&p;
    int*p2=p;
    

    printf("%p\n",b);//输出数组b的地址
    printf("%p\n",p);//输出指针p指向的地址
    printf("%p\n",*p1);
    printf("%p\n",&p1);

    printf("%p\n",&p);//输出指向p的指针的地址
    printf("%p\n",p1);
    printf("%p\n",p2);

    printf("%p\n",**p1);
    printf("%p\n",*p2);
    printf("%p\n",*p);
 */



    /*static int c=1;
    int a=2;
    int*p=&a;//p是a的地址
    int*p1=p;//注意p1不是p的地址，而是p，即a的地址
    int**p2=&p;
    int*p3=&c;
    printf("%p\n",p);//输出p即a的地址
    printf("%p\n",*p);//访问指针p指向的内容，p指向a所以访问a的值，也就是输出a的值
    printf("%p\n",p1);//输出p1，输出p，即输出a的地址
    printf("%p\n",*p1);//访问指针p1指向的对象，即访问指针p指向的对象
    printf("%p\n",*p2);//访问指针p2指向的对象，即访问&p指向的对象，即输出p也就是a的地址
    printf("%p\n",**p2);

    printf("%p\n",&p);//输出指针p的地址
    printf("%p\n",&p1);//输出指针p1的地址
    printf("%p\n",p2);//输出p2，即p的地址
   
    printf("%p\n",p3);
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(p1));
    printf("%d\n",sizeof(p2));
    printf("%d\n",sizeof(*p));
    printf("%d\n",sizeof(*p2));*/
    /*000000000061FE00;
000000000061FDF8;
000000000061FE00;
000000000061FE0C;*/
}