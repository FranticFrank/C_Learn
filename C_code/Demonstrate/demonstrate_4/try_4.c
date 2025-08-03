#include <stdio.h>
int main()
{
 /*  int i=0;
  int p;
  p=(int)&i;//不安全,应该用uintptr_t p = (uintptr_t)&i;
  const int ABC=1;
  int position=&ABC;
  printf("%p\n",&i);
  printf("0x%x\n",p);
  
  //printf("%p\n", (void *)&i);
  //printf("0x%lx\n", p); 
 
  printf("0x%x\n",position); */



  /*char c;
  c = -1;
  printf("%x",c);*/
  /*int a,b,c;
  b=c=0;
  while((a=getchar())!=-1){
    b++;
    if(a=='\n')
    c++;
  }
  printf("%d,%d",b,c);*/




  /*int s[10];
  s[0]=1;
  s[1]=1;
  s[2]=1;
  int i=0;
  s[i++]+=1;
  //s[i++]=s[i++]+1;
  printf("%d,%d,%d,%d",i,s[0],s[1],s[2]);*/



  /*int c[10];
  printf("%d",sizeof(c));*/


  /* short s=5;
  double d=2.9;
  s=d;
  printf("%d",sizeof(s+1)); */

  /* int a;
  printf("%d",scanf("%d",&a)==1);
 */


 /*  char c,b,d;
  c=getchar();
  b=getchar();
  d=getchar();
  printf("%c %c %c",c,b,d);
  return 0;
 */



  /* int x1,x2;
  scanf("%d%d",&x1,&x2);
  printf("%d%d",x1,x2); */
  /* auto y;
  printf("%d,%d",x,y); */
  /* int i=5;
  switch(i){
    case 0:printf("0");
    case 1:printf("1");
    case 2:printf("2");
    case 3:printf("3");
    case 4:printf("4");
    default:printf("default");
  } */

/*   int arr[]={1,2,3,4};
int size = sizeof(arr)/sizeof(arr[0]);
printf("the value of arr is 0x%x\n",arr);//printf("the value of arr is 0x%x\n",&arr);
for(int k=0;k<size;k++)
    printf("a[%d]=%d\t &a[%d]=0x%x\n",k,arr[k],k,&arr[k]);
return 0; */


/* char str[7]={'a','\'','\\','\0','\101','\n','\x22'};
for(int i=0;i<=6;i++)
printf("%c",str[i]); */


/* char a[2]={'A','\0'};
char b[4]={'B','C'};
printf("%s\n",b); */


/* int strCmp(char s[],char t[])
{
  int j=0;
  while(s[j]==t[j]&&s[j]!='\0')
    j++;
  return s[j]-t[j];
} */
char a[100]={};
char b[100]={};
scanf("%s",a);
scanf("%s",b);
printf("%s",a);
printf("%s",b);



}