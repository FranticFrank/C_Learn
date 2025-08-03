#include<stdio.h>
#include<stdlib.h>
void read_display(const char * filename);/* 将文件内容在屏幕上显示 */
void input_save(const char * filename);/* 将键盘输入保存到文件中 */
int main()
{
    input_save("D:\\C_code\\Notes\\_file_2.txt");/* 将从键盘上输入的一行字符保存到文件中 */
    read_display("D:\\C_code\\Notes\\_file_2.txt");/* 将文件内容在屏幕上显示输出 */
    return 0;
}
void read_display(const char * filename)
{
    FILE * fp;
    char ch;
    if ((fp=fopen(filename,"r"))==NULL)
    {
        printf("Can't open the file");
        exit(-1);
    }
    while((ch=fgetc(fp))!=EOF)/* 从文件中读取一个字符ch */
        putchar(ch);/* 在显示器上显示字符ch */
    fclose(fp);
}
void input_save(const char * filename)
{
    char ch;
    FILE * fp;
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("Can't open the file");
        exit(-1);
    }
    while((ch=getchar())!='\n')/* 从键盘上读取字符 */
        fputc(ch,fp);/* 将字符依次写入文件 */
    fclose(fp);
}