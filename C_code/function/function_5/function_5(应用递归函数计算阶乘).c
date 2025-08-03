/* #include <stdio.h>
// 声明递归函数
unsigned long long factorial(int n);
int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long fact = factorial(num);
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
// 定义递归函数
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // 阶乘的基本情况
    } else {
        return n * factorial(n - 1); // 递归调用
    }
} */

#include<stdio.h>
void demoRecur(unsigned int x)
{
    putchar(x%10+'0');
    if(x>9) 
    demoRecur(x/10);
    putchar(x%10+'0');
}
int main()
{
    int num;
    printf("Please input the number:\n");
    scanf("%d",&num);
    demoRecur(num);
    return 0;
}

