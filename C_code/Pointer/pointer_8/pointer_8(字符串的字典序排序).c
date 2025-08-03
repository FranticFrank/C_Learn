#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void writeStrArr(char *p[], int n);
/* 通常，编译器在编译时会查找与当前文件相关的头文件和源文件。
如果函数的定义在另一个文件夹中，编译器可能无法找到它。
为了在不同文件夹中正确引用函数，你需要确保编译器可以找到该函数的定义。
一种常见的方法是使用头文件和编译器选项。 */
void strSort(char *s[],int);
#define MAXLEN 80
#define STRNUM 6
int main() {
    int strLength, i;
    char *s[STRNUM],temp[MAXLEN];
    printf("输入%d个字符串:\n", STRNUM);
    for (i = 0; i < STRNUM; i++) {
        fgets(temp, MAXLEN, stdin); 
        // 每次循环迭代中，fgets() 函数会读取新的字符串并将其存储到 temp 数组中，覆盖掉之前的内容。
        strLength = strlen(temp);
        if (temp[strLength - 1] == '\n') // 如果输入的字符串末尾有换行符
            temp[strLength - 1] = '\0'; // 将其替换为字符串结束符

        s[i] = (char *)malloc(strLength + 1);
        if (s[i] == NULL) {
            // 释放已分配的内存
            for (int j = 0; j < i; j++) {
                free(s[j]);
            }
            printf("Memory allocation failed!\n");
            return -1;
        }
        strcpy(s[i], temp);
    }
    strSort(s,STRNUM);
    printf("--------------------------\n");
    writeStrArr(s, STRNUM);
    
    // 释放动态分配的内存
    for (i = 0; i < STRNUM; i++) {
        free(s[i]);
    }

    return 0;
}
void strSort(char *str[],int size)
{
    char *temp;
    int i,j;
    for(i=0;i<size-1;i++)
        for(j=0;j<size-i-1;j++)
            if (strcmp(str[j],str[j+1])>0)
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
}
void writeStrArr(char *p[], int n)
{
    int i = 0;
    while (n-- > 0) printf("%s\n", p[i++]);
}



/* #include<stdio.h>
#include<stdlib.h>
#include<string.h>
void writeStrArr(char **p, int n);
void strSort(char **s,int);
#define MAXLEN 80
#define STRNUM 6
int main() {
    int strLength, i;
    char **s,temp[MAXLEN];
    s=(char **)malloc(sizeof(char *)*STRNUM);
    printf("输入%d个字符串:\n", STRNUM);
    for (i = 0; i < STRNUM; i++) {
        fgets(temp, MAXLEN, stdin); 
        // 每次循环迭代中，fgets() 函数会读取新的字符串并将其存储到 temp 数组中，覆盖掉之前的内容。
        strLength = strlen(temp);
        if (temp[strLength - 1] == '\n') // 如果输入的字符串末尾有换行符
            temp[strLength - 1] = '\0'; // 将其替换为字符串结束符

        *(s+i) = (char *)malloc(strLength + 1);
        if (*(s+i) == NULL) {
            // 释放已分配的内存
            for (int j = 0; j < i; j++) {
                free(s[j]);
            }
            printf("Memory allocation failed!\n");
            return -1;
        }
        strcpy(*(s+i), temp);
    }
    strSort(s,STRNUM);
    printf("--------------------------\n");
    writeStrArr(s, STRNUM);
    
    // 释放动态分配的内存
    for (i = 0; i < STRNUM; i++) {
        free(s[i]);
    }

    return 0;
}
void strSort(char **str,int size)
{
    char *temp;
    char **p;
    int i;
    for(i=0;i<size-1;i++)
        for(p=str;p<str+size-1;p++)
            if (strcmp(*p,*(p+1))>0)
            {
                temp=*p;
                *p=*(p+1);
                *(p+1)=temp;
            }
}
void writeStrArr(char **p, int n)
{
    while (n-- > 0)
    printf("%s\n", *p++);
} */