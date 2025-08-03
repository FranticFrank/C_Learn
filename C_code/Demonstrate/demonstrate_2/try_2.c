/* #include<stdio.h>
long fac(int);
void main()
{
    int n;
    scanf("%d",&n);
    printf("n=%d\n",n);
    printf("n!=%ld\n",fac(n));
    printf("n=%d\n",n);

}
long fac(int n)
{
    long f=1;
    for( ;n>0;--n)
    f*=n;
    printf("n=%d\n",n);
    return(f);

} */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/* char *getString(void)
{
    char p[]="Hello world!";
    return p;
} */
char *getString(void) {
    char *p = (char *)malloc(strlen("Hello world!") + 1);
    if (p != NULL) {
        strcpy(p, "Hello world!");
    }
    return p;
}
int main()
{
    printf("%s",getString());    
}