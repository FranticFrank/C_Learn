#include <stdio.h>
#include <string.h>
#define MAXLEN 63
int isKeyword(char *s)
{
    static char *keyword[] = {"auto", "char", "continue", "if", "int", NULL};
    /* 关键字表 */
    int i;
    for (i = 0; keyword[i] != NULL; i++)
        if (!strcmp(s, keyword[i]))
            return 1;
    return 0;
}
int main()
{
    char s[MAXLEN + 1];
    printf("Input strings\n");
    while (scanf("%s",s) != EOF) /* 在输入错误或者遇到文件尾时，scanf返回EOF */
        if (isKeyword(s))
            printf("%s is a keyword\n", s);
        else
            printf("%s is not a keyword\n", s);
    return 0;
}