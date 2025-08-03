#include <stdio.h>
#define N 10
struct win
{
    int num;            /* 窗口号 */
    int x1, x2, y1, y2; /* 窗口坐标 */
};
int clickWin(struct win w[], int n);
int inWindow(struct win, int x,int y);
int order[N];
int main()
{
    struct win w[N]; /* 存储N个窗口的信息 */
    int top;         /* 保存鼠标单击的顶层窗口号，-1表示未单击到窗口 */

    int n, m, i;

    printf("Enter Number of windows and clicks\n");
    scanf("%d %d", &n, &m); /* 输入窗口数和鼠标单击数 */
    printf("Enter %d window coordinates\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &w[i].x1, &w[i].y1, &w[i].x2, &w[i].y2); /* 输入窗口坐标 */
        w[i].num = i + 1;                                             /* 按输入顺序给窗口自动编号 */
    }
    for (i = 0; i < n; i++) /* 初始化窗口的显示顺序 */
        order[i] = n - i - 1;

    printf("Enter the click coordinates\n", n);

    for (i = 0; i < m; i++)
    {                         /* 模拟m次鼠标单击操作 */
        top = clickWin(w, N); /* 单击一次 */
        if (top != -1)
            printf("%d\n", top); /* 输出结果 */
        else
            printf("Ignored\n");
    }
    return 0;
}
/* 模拟一次鼠标单击操作，返回被单击处的顶层窗口数 */
int clickWin(struct win w[], int n)
{
    int x, y, top = -1;
    int i, c, k;
    scanf("%d %d", &x, &y); /* 输入鼠标单击处的坐标 */
    for (i = 0; i < n; i++)
    { /* 从最顶层窗口开始遍历，判断哪个窗口被单击 */

        c = order[i]; /* 纪录窗口索引,下标表示顺序 */
        if (inWindow(w[c],x,y))   /* 单击在窗口内 */
        {                           
            top = w[c].num;         /* 记录单击的窗口号 */
            for (k = i; k > 0; k--) /* 移动被单击的窗口到最前端 */
                order[k] = order[k - 1];
            order[0] = c;
            break;
        }
    }
    return top; /* 返回窗口号 */
}

int inWindow(struct win w,int a,int b)
{
    if (w.x1 <= a && a <= w.x2 && w.y1 <= b && b <= w.y2)
        return 1;
    return 0;
}