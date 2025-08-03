/* 定义函数void move(int n,int a,int b,int c);其功能是:将n个盘子通过a借助b移到c. */
#include<stdio.h>
#include<stdlib.h>
void move(int,int,int,int);
int main()
{
    int n,a ='A',b ='B',c ='C';
    printf("The problem starts with n disks on Tower A.\nInput n:\n");
    if(scanf("%d",&n)!=1||n<1){
        printf("\nERROR:positive integer not found");
        return -1;
    }
    move(n,a,b,c);
    return 0;
}

void move(int n,int a,int b,int c)
{
    static int cnt=1;
    if(n==1)
        printf("step %d:%c-->%c\n",cnt++,a,c);
    else {
        move(n-1,a,c,b);
        printf("step %d:%c-->%c\n",cnt++,a,c);
        move(n-1,b,a,c);
    }
}

/* 好的，让我们以 `n=3` 为例，来说明代码的运行过程，包括调用栈中的处理方式。

首先，我们调用 `move(3, 'A', 'B', 'C')`。
1. 调用 `move(3, 'A', 'B', 'C')`:
   - 进入 `move` 函数，`cnt` 初始化为 1。
   - 进入 `else` 分支，调用 `move(2, 'A', 'C', 'B')`。
2. 调用 `move(2, 'A', 'C', 'B')`:
   - 进入 `move` 函数，`cnt` 保留为 1。
   - 进入 `else` 分支，调用 `move(1, 'A', 'B', 'C')`。
3. 调用 `move(1, 'A', 'B', 'C')`:
   - `n==1` 成立，打印 "step 1: A --> C"。
   - 返回上一级调用。
4. 回到 `move(2, 'A', 'C', 'B')`:
   - 打印 "step 2: A --> B"。
   - 调用 `move(1, 'C', 'A', 'B')`。
5. 调用 `move(1, 'C', 'A', 'B')`:
   - `n==1` 成立，打印 "step 3: C --> B"。
   - 返回上一级调用。
6. 回到 `move(2, 'A', 'C', 'B')`:
   - 打印 "step 4: A --> C"。
   - 调用 `move(1, 'B', 'A', 'C')`。
7. 调用 `move(1, 'B', 'A', 'C')`:
   - `n==1` 成立，打印 "step 5: B --> A"。
   - 返回上一级调用。
8. 回到 `move(3, 'A', 'B', 'C')`:
   - 打印 "step 6: A --> B"。
   - 调用 `move(2, 'C', 'A', 'B')`。
9. 调用 `move(2, 'C', 'A', 'B')`:
   - 进入 `move` 函数，`cnt` 保留为 1。
   - 进入 `else` 分支，调用 `move(1, 'C', 'B', 'A')`。
10. 调用 `move(1, 'C', 'B', 'A')`:
   - `n==1` 成立，打印 "step 7: C --> A"。
   - 返回上一级调用。
11. 回到 `move(2, 'C', 'A', 'B')`:
   - 打印 "step 8: C --> B"。
   - 调用 `move(1, 'A', 'C', 'B')`。
12. 调用 `move(1, 'A', 'C', 'B')`:
   - `n==1` 成立，打印 "step 9: A --> B"。
   - 返回上一级调用。
13. 回到 `move(2, 'C', 'A', 'B')`:
   - 打印 "step 10: C --> A"。
   - 调用 `move(1, 'B', 'A', 'C')`。
14. 调用 `move(1, 'B', 'A', 'C')`:
   - `n==1` 成立，打印 "step 11: B --> C"。
   - 返回上一级调用。
15. 回到 `move(3, 'A', 'B', 'C')`:
   - 打印 "step 12: A --> B"。
   - 调用 `move(2, 'B', 'C', 'A')`。
16. 调用 `move(2, 'B', 'C', 'A')`:
   - 进入 `move` 函数，`cnt` 保留为 12。
   - 进入 `else` 分支，调用 `move(1, 'B', 'A', 'C')`。
17. 调用 `move(1, 'B', 'A', 'C')`:
   - `n==1` 成立，打印 "step 13: B --> A"。
   - 返回上一级调用。
18. 回到 `move(2, 'B', 'C', 'A')`:
   - 打印 "step 14: B --> C"。
   - 调用 `move(1, 'A', 'B', 'C')`。
19. 调用 `move(1, 'A', 'B', 'C')`:
   - `n==1` 成立，打印 "step 15: A --> C"。
   - 返回上一级调用。
20. 回到 `move(2, 'B', 'C', 'A')`:
   - 打印 "step 16: B --> A"。
   - 调用 `move(1, 'C', 'A', 'B')`。
21. 调用 `move(1, 'C', 'A', 'B')`:
   - `n==1` 成立，打印 "step 17: C --> B"。
   - 返回上一级调用。
22. 回到 `move(2, 'B', 'C', 'A')`:
   - 打印 "step 18: B --> C"。
   - 调用 `move(1, 'A', 'C', 'B')`。
23. 调用 `move(1, 'A', 'C', 'B')`:
   - `n==1` 成立，打印 "step 19: A --> B"。
   - 返回上一级调用。
24. 回到 `move(3, 'A', 'B', 'C')`:
   - 打印 "step 20: A --> B"。
   - 返回上一级调用。
最终，整个递归调用过程结束，汉诺塔问题得到了解决，所有盘子都从柱子 'A' 移动到了柱子 'C'，并且每一步移动的过程都被正确输出。 */