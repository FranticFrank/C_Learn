/*使用单链表来实现一个简单的动态数组*/
/*这个程序允许用户不断地添加整数到数组中,并在退出程序时打印出所有存储的整数.*/
#include <stdio.h>
#include <stdlib.h>
// 定义链表节点结构
struct Node {
    int data;
    struct Node *next;
};
/* 函数 insertNode`的目的是向单链表中插入一个新的节点,该节点包含提供的整数数据data.
在单链表中,我们需要从头开始遍历链表,直到找到链表的末尾,然后将新节点插入到末尾.

以下是 insertNode 函数的详细解释:
1. 函数的参数包括一个指向指针的指针 head,以及要插入的整数数据 data.
2. 在函数内部,我们首先为新节点分配内存空间,这通过调用 malloc(sizeof(struct Node)) 来实现.如果内存分配失败,程序将打印一条错误消息并退出.
3. 然后,我们将新节点的数据成员 data 设置为提供的整数数据.
4. 新节点的 next 指针设置为 NULL,因为它将成为链表中的最后一个节点.
5. 接下来,需要判断链表是否为空.如果链表为空,也就是头指针为 NULL,那么我们将头指针指向新节点.
6. 否则,我们需要从链表的头节点开始遍历链表,直到找到链表的末尾.在遍历过程中,我们沿着链表的 next 指针移动,直到遇到最后一个节点.
7. 当我们找到链表的最后一个节点时,我们将该节点的 next 指针设置为新节点,以将新节点连接到链表的末尾. */
void insertNode(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}
// 打印链表中的所有节点
void printList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
// 释放链表中的所有节点
void freeList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
}
int main() {
    struct Node *head = NULL;
    printf("Enter integers (enter -1 to stop):\n");
    int num;
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        insertNode(&head, num);
    }
    printf("Stored integers: ");
    printList(head);
    freeList(head);
    return 0;
}
