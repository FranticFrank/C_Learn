#include<stdio.h>
#include<stdlib.h>/* 标准函数库的头文件 */
#include<time.h>/* 日期和时间函数库的头文件 */
#define MAX_NUMBER 1000/* 被猜数的最大值 */
void guessNum(int);
int getNum(void);
int main()
{
    char choice='y';
    int magic;
    printf("This is a guessing game\n");
    srand(time(NULL));/* 用系统时间初始化随机数发生器 */
    for(;choice=='y'||choice=='Y';)
    {
        printf("A magic number between 1 and %d has been chosen.\n",MAX_NUMBER);
        magic=getNum();
        guessNum(magic);
        printf("Play again?(Y/N)\n");
        scanf("%1s",&choice);
    }
    return 0;
}

int getNum(void)
{
    int numberToGuess;
    numberToGuess=rand();/* 调用标准库函数rand产生一个随机数 */
    numberToGuess=numberToGuess%MAX_NUMBER+1;
    return numberToGuess;
}

void guessNum(int numberToGuess)
{
    int guess;
    int attempts;
    do {
        printf("Guess the number (between 1 and 1000): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else if (guess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", numberToGuess, attempts);
        }
    } while (guess != numberToGuess);
    return;//返回控制但不返回值,事实上这个转移语句可以不用
}
