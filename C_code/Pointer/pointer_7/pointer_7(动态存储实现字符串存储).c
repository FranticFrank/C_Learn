/* #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLEN 80
#define STRNUM 10
void writeStrArr(const char *p[],int n)
{
    int i=0;
    while(n-->0) printf("%s\n",p[i++]);
}
int main()
{
    int strLength,i;
    char *s[STRNUM],temp[MAXLEN];
    printf("输入%d个字符串,一行一个字符串\n",STRNUM);
    for ( i = 0; i < STRNUM; i++){
        gets(temp);
        strLength = strlen(temp);
        s[i] = (char *)malloc(strLength+1);
        if(s[i]==NULL) return -1;
        strcpy(s[i],temp);
    }
    writeStrArr(s,STRNUM);
    return 0;
} */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLEN 80
#define STRNUM 10

void writeStrArr(char *p[], int n) {
    int i = 0;
    while (n-- > 0) printf("%s\n", p[i++]);
}

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
    writeStrArr(s, STRNUM);
    
    // 释放动态分配的内存
    for (i = 0; i < STRNUM; i++) {
        free(s[i]);
    }

    return 0;
}
