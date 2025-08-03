#include <stdio.h>
int main()
{
    int a[2][3]={};
    printf("Address of a[0][0]: %p\n", (void *)&a[0][0]);        // a[0][0]的地址
    printf("Value of a:         %p\n", (void *)a);               // a指向第0行
    printf("Value of a[0]:      %p\n", (void *)a[0]);            // a[0]指向第0行第0个元素
    printf("Value of *a:        %p\n", (void *)*a);              // *a等价于a[0],指向第0行第0个元素
    printf("Value of &a:        %p\n", (void ***)&a);            // a的地址
    printf("Value of &a[0]:     %p\n", (void **)&a[0]);          // a[0]的地址
}