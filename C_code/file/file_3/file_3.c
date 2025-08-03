#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp;
    char *str="Hello world,I'm confused.\n",ch[80];
    if((fp=fopen("D:\\C_code\\Notes\\_file_3.txt","w"))==NULL)
    {
        printf("Can't open the file");
        exit(-1);
    }
    fputs(str,fp);
    fclose(fp);
    if((fp=fopen("D:\\C_code\\Notes\\_file_3.txt","r"))==NULL)
    {
        printf("Can't open the file");
        exit(-1);
    }
    while(!feof(fp))/* 遇到文件尾结束 */
    {
        if (fgets(ch,50,fp)!=NULL)
            printf("%s",ch);
    }
    fclose(fp);
    return 0;
}