/* 线性同余法是产生伪随机数的经典算法,它通过如下递推关系定义:
X(0) = seed
X(n) = (A*X(n-1)+C) mod M
X(n)是伪随机序列,seed是种子变量,M是模数,也是生成序列的最大周期.参数的选择十分重要 */

#define INITIAL_SEED 17
#define MULTIPLIER 25173
#define INCREMENT 13849
#define MODULUS 32767
static unsigned long seed = INITIAL_SEED; /* 种子 */
/* 产生0~MODULUS的整型随机数 */
unsigned myRand()
{
    seed = (seed*MULTIPLIER+INCREMENT) % MODULUS;
    return seed;
}
/* 用形参x初始化随机数种子 */
void mysRand(unsigned x)
{
    seed=x;
}