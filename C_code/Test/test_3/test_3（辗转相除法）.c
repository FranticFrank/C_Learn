#include<stdio.h>
int main(void)
{
   char name[1];
   int a,b;
   printf("Please input your name :\n");
   gets(name);
   printf("Hello %s!\n",name);
   printf("Please input num1:\n");
   scanf("%d",&a);
   printf("please input num2:\n");
   scanf("%d",&b);
   printf("The greatest common divisor of %d and %d is ",a,b);
   while(b!=0)
   {
      int r;
      r=a%b;
      a=b;
      b=r;
   }
   printf("%d.",a);
   return 0;
}

