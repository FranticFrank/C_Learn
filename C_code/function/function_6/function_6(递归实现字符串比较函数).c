/* #include<stdio.h>

int mystrcmp(char s[], char t[]) {
    if (s[0] == '\0' && t[0] == '\0') // 判断两个字符串是否都为空
        return 0;
    else if (s[0] != t[0]) // 判断当前字符是否相等
        return 1;
    else
        return mystrcmp(&s[1], &t[1]); // 递归调用mystrcmp比较下一个字符
}

int main() {
    int ans;
    char s[100]; // 假设最大长度为100
    char t[100]; // 假设最大长度为100
    printf("请输入两个字符串:\n");
    scanf("%s %s", s, t);
    ans = mystrcmp(s, t);
    switch (ans) {
        case 1:
            printf("两字符串不相等");
            break;
        case 0:
            printf("两字符串相等");
            break;
    }
    return 0;
}
 */
#include<stdio.h>
int mystrcmp(char s[],char t[])
{
    if(s[0]!=t[0])
    return 1;
    else if(s[0]=='\0')
    return 0;
    else return(mystrcmp(&s[1],&t[1]));//mystrcmp(s+1,t+1)
}
int main()
{
    int ans;
    char s[]={0};
    char t[]={0};
    printf("请输入两个字符串:\n");
    scanf("%s %s",s,t);
    ans=mystrcmp(s,t);
    switch(ans){
        case 1:printf("两字符串不相等");
        break;
        case 0:printf("两字符串相等");
        break;
    }
    return 0;
}