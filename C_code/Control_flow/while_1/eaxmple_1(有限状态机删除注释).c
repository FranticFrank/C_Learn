#include<stdio.h>
enum{COPY,START,COMMENT,END};
int main(void)
{
    char c;
    int state=COPY;
    printf("input C program end with ctrl+z:\n");
    while((c=getchar())!=EOF)
    {
        switch(state)
        {
            case COPY:
              if(c=='/') state=START;
              else putchar(c);
              break;
            case START:
              if(c=='*') state=COMMENT;
              else
              {
                putchar('/');
                if(c=='/') state=START;
                else 
                {
                    putchar(c);
                    state=COPY;
                }
                //state=((c=='/')? START:(putchar(c),COPY));
              }
              break;
            case COMMENT:
              if(c=='*') state=END;
              break;
            case END:
              state=(c=='/')? COPY:((c=='*')? END:COMMENT);  
              break;
        }
    }
    return 0;
}