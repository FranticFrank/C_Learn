#include <stdio.h>
#include <string.h>

#define MAX_KEYWORDS 10 // 定义最大关键字数量

int searchKeywords(const char *keywords[], int numKeywords, const char *str, int foundIndexes[]) {
    int count = 0; // 找到的关键字数量

    for (int i = 0; i < numKeywords; i++) {
        if (strstr(str, keywords[i]) != NULL) {
            foundIndexes[count++] = i; // 将找到的关键字的索引存储在数组中
        }
    }
    return count; // 返回找到的关键字数量
}

int main() {
    const char *keywords[] = {"auto", "char", "continue", "if", "int",NULL}; // 关键字数组
    int numKeywords = 0; // 关键字数组的长度

    // 遍历数组并统计非空指针的数量
    for (int i = 0; keywords[i] != NULL; i++) {
        numKeywords++;
    }

    printf("Input strings please:\n");
    char str[100]; // 要搜索的字符串
    gets(str);
    int foundIndexes[MAX_KEYWORDS]; // 存储找到的关键字的索引
    int numFound; // 找到的关键字数量

    // 调用函数查找关键字
    numFound = searchKeywords(keywords, numKeywords, str, foundIndexes);

    // 输出找到的关键字
    if (numFound > 0) {
        printf("The following keywords are found in the string:\n");
        for (int i = 0; i < numFound; i++) {
            printf("- %s\n", keywords[foundIndexes[i]]);
        }
    } else {
        printf("No keywords are found in the string.\n");
    }

    return 0;
}
