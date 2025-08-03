int h,m,s;/* 外部变量定义性声明，作用域开始 */
void secondToTime(int sec)/* 函数定义 */
{
    h=sec/3600;
    m=(sec-3600*h)/60;
    s=sec%60;
}
/* 外部变量作用域结束 */