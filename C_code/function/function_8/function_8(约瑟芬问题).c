#include<stdio.h>
#define N 15
#define M 6
/* //递归思想
int circle[N]={0}; //0表示在圈内,1表示被移出圈
void josephus(int n,int m,int position) // n个人从position位置开始1~m报数
{
    int count;
    if(n==1) return;
    for(count = 1;count<=m;position++)
    {
        position = position % N; //让数组编号为position的下标圆圈化,也防止下标溢出
        if(circle[position]==0) count++; //在圈内则计数加一
    }
    circle[position-1] = 1; //报数为m的人出圈,模拟删除过程
    josephus(n-1,m,position);
}
int main(void)
{
    int i;
    josephus(N,M,0);
    for(i = 0;circle[i];i++)
        ;
    printf("The survivor is at position:%d\n",i+1);
    return 0;
} */


//递推思想
int josephus(int n, int m) {
    int result = 0;
    for (int i = 2; i <= n; i++) 
    {
        result = (result + m) % i; //通过 (result + m) % i 计算下一个被删除的人的位置,其中 result 是上一次被删除的人的位置
    }
    return result + 1;
}
int main() {
    int survivor = josephus(N, M);
    printf("The survivor is at position:%d\n", survivor);
    return 0;
}
/* 假设我们用f(n, m)表示当有n个人，每报到第m个人就出列时，最后留下的人在原始序列中的位置。为了推导递推关系，我们可以考虑从小规模问题出发，逐步推导出递推关系。

当n=1时，只有一个人，那么他肯定是最后留下的人，位置就是1，即f(1, m) = 1。

当n=2时，有两个人，按照规则，第一个人报数为1，当他出列后，剩下的人就是最后留下的，位置是2，即f(2, m) = 2。

当n=3时，有三个人，我们可以模拟报数的过程，假设报到m的人出列后，剩下的人的位置为x，由于是环形的，所以剩下的人重新从1开始报数，所以剩下的人在出列前的编号为 (x + m - 1) % 3 + 1，所以最后剩下的人的位置就是 f(3, m) = (x + m - 1) % 3 + 1。现在，我们需要找到x和f(2, m)之间的关系，我们知道当n=2时，最后留下的人的位置是f(2, m) = 2，所以 x = f(2, m)。将其代入上面的公式，得到 f(3, m) = (f(2, m) + m - 1) % 3 + 1。

我们可以通过这种方式推导出更大规模的问题的递推关系，一般情况下，有如下的递推关系：
f(n,m)=(f(n−1,m)+m−1)%n+1

这就是约瑟夫问题的递推关系。通过这个递推关系，我们可以用递归或者动态规划的方式求解约瑟夫问题。 */