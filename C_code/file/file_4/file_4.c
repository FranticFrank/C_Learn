#include<stdio.h>
#include<stdlib.h>
void goods_write(char *filename);
void goods_compute(char *filename);
int main()
{
    char a[30]="D:\\C_code\\Notes\\_file_4.txt";
    FILE *fp;
    char goods[3][10],t1[10];
    float price[3],sum=0.0;
    int number[3],i=0;
    goods_write(a);
    goods_compute(a);
    if((fp=fopen(a,"r"))==NULL)
        exit(-1);
    printf("\nOutput\n");
    while(i<3){
        fscanf(fp,"%s%f%d",goods[i],&price[i],&number[i]);
        printf("%s %5.2f %d\n",goods[i],price[i],number[i]);
        ++i;
    }
    fscanf(fp,"%s %f",t1,&sum);
    printf("%s %5.2f",t1,sum);
    fclose(fp);
    return 0;
}
void goods_write(char *filename)
{
    FILE *fp;
    char goods[3][10];
    float price[3];
    int number[3],i=0;
    if((fp=fopen(filename,"w"))==NULL)
        exit(-1);
    printf("Input:\n");
    while(i<3){
        scanf("%s%f%d",goods[i],&price[i],&number[i]);
        fprintf(fp,"%s %5.2f %d\n",&goods[i][0],price[i],number[i]);
        ++i;
    }
    fclose(fp);
}
void goods_compute(char *filename)
{
    FILE *fp;
    char goods[3][10],t1[10]="total:";
    float price[3],sum=0.0;
    int number[3],i=0;
    if((fp=fopen(filename,"r"))==NULL)
        exit(-1);
    while(i<3){
        fscanf(fp,"%s%f%d",&goods[i][0],&price[i],&number[i]);
        sum+=price[i]*number[i];
        ++i;
    }
    fclose(fp);
    if((fp=fopen(filename,"a"))==NULL)
        exit(-1);
    fprintf(fp,"%s %5.2f",t1,sum);
    fclose(fp);
}