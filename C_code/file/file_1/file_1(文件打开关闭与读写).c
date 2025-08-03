#include<stdio.h>
int main()
{
    FILE * fp;
    char c[30];

    if((fp=fopen("D:\\C_code\\Notes\\_file_1.txt","w"))==NULL)
    {
        printf("failed\n");
        return 0;
    }
    while(fgets(c,80,stdin)!=NULL)
        fprintf(fp,"%s",c);
    fclose(fp);
    return 0;
}