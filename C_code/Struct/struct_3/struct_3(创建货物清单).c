#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
struct goods
{
    int code;
    char name[20];
    float price;
};
void input(struct goods *p,int n);
void display(struct goods *p,int n);
void sort(struct goods *p,int n,int (*fp)(const void *,const void *));
struct goods *searchCode(struct goods *p,int n,int code);
void modify(struct goods *p,int n);
int cmpbyPrice(const void *p1,const void *p2);
int cmpbyName(const void *p1,const void *p2);
int main()
{
    struct goods item[MAX];
    int total=0;
    while(1)
    {
        int f=0,n;
        printf("\n\t\t1.输入货物基本信息\n");
        printf("\t\t2.输出货物清单\n");
        printf("\t\t3.修改指定货物的指定数据项内容\n");
        printf("\t\t4.按照单价降序排序\n");
        printf("\t\t5.按照名称升序排序\n");
        printf("\t\t6.退出\n\n");
        printf("输出数字,选择相应功能:");
        scanf("%d",&f);
        switch(f)
        {
            case 1:
                printf("此次输入货物的数目:");
                scanf("%d",&n);/* 当次输入货物的数目 */
                    if(total+n<=MAX) input(item+total,n);
                    else{
                        printf("货物已达上限\n");
                        return 0;
                    }
                    total += n;
                break;
            case 2:
                display(item,total);
                break;
            case 3:
                modify(item,total);
                break;
            case 4:
                sort(item,total,cmpbyPrice);
                    display(item,total);
                break;
            case 5:
                sort(item,total,cmpbyName);
                    display(item,total);
                break;
            case 6:
                return 0;
            default:
                break;
        }
        printf("按下任意键以继续...\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // 清空输入缓冲区
        getchar();
    }
}

/* 输入货物的基本信息 */
void input(struct goods *p,int n)
{
    int i;
    for(i=0;i<n;i++,p++){
        printf("货物编码(整数):"); scanf("%d",&p->code);
        printf("货物名称:"); scanf("%s",p->name);
        printf("货物单价:"); scanf("%f",&p->price);
        printf("\n");
    }
}

/* 输出货物清单 */
void display(struct goods *p,int n)
{
    printf("\n%20s %20s %20s\n","货物编码","货物名称","货物单价");
    for(int i = 0;i<n;i++,p++)
        printf("%20d %20s %20.2f\n",p->code,p->name,p->price);
    printf("\n");
}

/* 用冒泡法,通过函数指针fp指明规则,对货物排序 */
void sort(struct goods *p,int n,int (*fp)(const void *,const void *))
{
    int i,j;
    struct goods t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(fp(p+i,p+j)){
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
}

/* 按价格比较 */
int cmpbyPrice(const void *s,const void *t)
{
    const struct goods *p1,*p2;
    p1=(const struct goods *)s;
    p2=(const struct goods *)t;
    /* 将void类型的指针转换为指向struct goods类型的指针,否则编译器无法知道它们所指向的具体类型,void *类型的指针无法直接进行成员访问操作*/
    if(p1->price<p2->price) return 1;
    else return 0;
}

/* 按名称比较 */
int cmpbyName(const void *s,const void *t)
{
    const struct goods *p1,*p2;
    p1=(const struct goods *)s;
    p2=(const struct goods *)t;
    return(strcmp(p1->name,p2->name)>0);
}

/* 修改货物信息 */
void modify(struct goods *p,int n)
{
    struct goods *modGoods;
    int item,code;
    char ch;
    printf("请输入要修改的货物编码:\n");
    scanf("%d",&code);
    if((modGoods=searchCode(p,n,code))!=NULL){
        printf("1.编码:%d\n",modGoods->code);
        printf("2.名称:%s\n",modGoods->name);
        printf("3.单价:%.2f\n",modGoods->price);
        do{
            printf("请输入要修改的数据项\n");
            scanf("%d",&item);
            switch(item)
            {
                case 1:
                    while(1){
                        printf("输入新的编码(整数):\n");
                        scanf("%d",&code);
                        if(searchCode(p,n,code)==NULL)
                            break;
                        printf("该编码已经存在!\n");
                    }
                    modGoods->code=code;
                    break;
                case 2:
                    printf("输入新的名称:\n");
                    scanf("%s",modGoods->name);
                    break;
                case 3:
                    printf("输入新的单价:\n");
                    scanf("%f",&modGoods->price);
                    break;
                default:
                    printf("不存在该项数据\n");
                    break;
            }
            printf("还有要修改的项吗?(Y or N)\n");
            scanf("%1s",&ch);//%1s只读取一个字符,且会读取空白字符,不会在字符后面加上'\0'
        }
        while((ch=='y')||(ch=='Y'));
    }
    else printf("货物不存在\n"); 
}

/* 按编码搜寻货物,如果找到返回指向货物的指针,否则返回空指针 */
struct goods *searchCode(struct goods *p,int n,int code)
{
    struct goods *cur;
    for(cur=p;cur<p+n;cur++)
        if(code==cur->code) return cur;
    return NULL;
}

