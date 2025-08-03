#include<stdio.h>
int main()
{
    //大小写字母转换,
    /*char ch;
    printf("请输入一个字母:\n");
    ch=getchar();getchar();
    while(!((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')))
    {
        printf("输入有误，请重新输入字母:\n");
        ch=getchar();getchar();
    }
    ch^=32;
    printf("%c\n",ch);
    return 0;*/

    


    int ch=0;
    printf("请输入一列字符:\n");
    while( (ch=getchar())!='\n')
    {
    if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
    {
        ch ^= 32;
        printf("%c", ch);
    }
    else
    {
        printf("%c",ch);
    }
    }
    return 0;





	/*int cnt = 0;
	char a[100] = {0};
	char ch;
	printf("请输入一列字符:\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			ch -= 32;
			a[cnt] = ch;
			cnt++;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch += 32;
			a[cnt] = ch;
			cnt++;
		}
		else
		{
			a[cnt] = ch;
			cnt++;
		}
		
	}
	int temp = 0;
	while (a[temp] != 0) {
		printf("%c", a[temp]);
		temp++;
	}
	return 0;*/

 
 

}