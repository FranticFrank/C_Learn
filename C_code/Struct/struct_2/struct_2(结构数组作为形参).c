#include <stdio.h>
#include <string.h>
#define MAX_SIZE 3
// 定义一个结构体,必须在主函数之外作为全局变量
struct Person {
    char name[50];
    int age;
};
void printPeoplePtr(struct Person *people, int size);
void printPeopleArr(struct Person people[], int size);

int main() {
    struct Person people[MAX_SIZE] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 35}
    };
    // 调用函数，传递结构数组的指针作为参数
    printPeoplePtr(people, MAX_SIZE);
    // 调用函数，直接传递整个结构数组作为参数
    //printPeopleArr(people, MAX_SIZE);
    return 0;
}
// 第一种方法：将结构数组的指针作为参数传递
void printPeoplePtr(struct Person *people, int size) {
    printf("People (passed by pointer):\n");
    for (int i = 0; i < size; ++i) {
        printf("Name: %s\t Age: %d\n", people[i].name, people[i].age);
    }
}
// 第二种方法：直接将结构数组作为参数传递
void printPeopleArr(struct Person people[], int size) {
    printf("People (passed by array):\n");
    for (int i = 0; i < size; ++i) {
        printf("Name: %s\t Age: %d\n", people[i].name, people[i].age);
    }
}