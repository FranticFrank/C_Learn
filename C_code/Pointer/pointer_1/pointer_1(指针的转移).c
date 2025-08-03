#include <stdio.h>
#define CASE 1
int main()
{
#if CASE == 1
   /* 将short数的高字节和低字节交换 */
   short a = 0x5678;
   char t, *p = (char *)&a; /* p指向a的低字节 */
   printf("Before swap a=%#hx\n", a);
   t = *p;
   *p = *(p + 1);
   *(p + 1) = t; /* 交换高低字节,通过操作指针间接操作指针指向的字节 */
   printf("After swap a= %#hx\n", a);
   return 0;
#elif CASE == 0
   int arr[] = {10, 20, 30, 40, 50};
   int *ptr = arr; // 指向数组的第一个元素
   // 访问数组中的元素
   printf("数组元素: ");
   for (int i = 0; i < 5; i++) {
       printf("%d ", *ptr); // 解引用指针，访问当前指向的元素
       ptr++; // 移动指针到下一个元素
   }
   printf("\n");
   return 0;
#else
    int n = 5;
    // 动态分配内存来存储整型数据
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    // 初始化分配的内存
    for (int i = 0; i < n; i++) {
        *(ptr + i) = i * 10;
    }
    // 打印分配的内存中的数据
    printf("分配的内存中的数据: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    // 释放动态分配的内存
    free(ptr);
    return 0;
#endif
}
