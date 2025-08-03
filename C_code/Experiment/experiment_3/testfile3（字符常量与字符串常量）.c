#include<stdio.h>
int main(void)
{
    char str[]="world";//字符串常量，用字符数字表示，末尾有空字符\0。
    char s='a',p=97;
    int counter=0;
    while(str[counter]!='\0')
        ++counter;
    printf("%d\n",counter);
    printf("%d\t%d\t%d\t%d\t%d\n",sizeof(str),sizeof(char),sizeof(float),sizeof(long),sizeof(double));
    printf("Hello, ho\
w are y\
ou%c\n",'\?');//反斜线是续行符号这里是行连接，换行后应该紧靠行首。
    printf("Hello, how"
         " are you?\n");//这里是字符串连接，换行后不必紧靠行首。
    printf("%d\t%c\n",s,p);
    return 0;

}