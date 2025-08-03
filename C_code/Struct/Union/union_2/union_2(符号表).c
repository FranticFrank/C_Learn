#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 定义枚举类型，表示变量类型
enum DataType {
    INTEGER,
    FLOAT,
    STRING
};
// 定义联合体，用于存储不同类型的值
union Value {
    int integer_val;
    float float_val;
    char string_val[50];
};
// 定义结构体，表示符号表中的条目
struct SymbolEntry {
    char name[50];          // 符号的名称
    enum DataType type;     // 符号的数据类型
    union Value value;      // 符号的值
};
// 函数声明
void printSymbolEntry(struct SymbolEntry entry);

int main() {
    // 创建一个符号表的数组
    struct SymbolEntry symbol_table[3];

    // 向符号表中添加条目
    strcpy(symbol_table[0].name, "x");
    symbol_table[0].type = INTEGER;
    symbol_table[0].value.integer_val = 10;

    strcpy(symbol_table[1].name, "y");
    symbol_table[1].type = FLOAT;
    symbol_table[1].value.float_val = 3.14;

    strcpy(symbol_table[2].name, "str");
    symbol_table[2].type = STRING;
    strcpy(symbol_table[2].value.string_val, "Hello, world!");

    // 打印符号表中的所有条目
    printf("Symbol Table:\n");
    for (int i = 0; i < 3; i++) {
        printSymbolEntry(symbol_table[i]);
    }
    return 0;
}
// 打印符号表条目的函数
void printSymbolEntry(struct SymbolEntry entry) {
    printf("Name: %s, Type: ", entry.name);
    switch (entry.type) {
        case INTEGER:
            printf("Integer, Value: %d\n", entry.value.integer_val);
            break;
        case FLOAT:
            printf("Float, Value: %.2f\n", entry.value.float_val);
            break;
        case STRING:
            printf("String, Value: %s\n", entry.value.string_val);
            break;
        default:
            printf("Unknown\n");
            break;
    }
}
