#include<stdio.h>

int main()
{
    int c,s;
    int n1;
    while ((c=getchar())!=EOF)
    {
        if(c != ' ')
            putchar(c);

        if(c == ' ')
        {
            putchar(c);
            for (n1 = 0; (c=getchar())==' ' ; n1++)
                ;
            putchar(c);
        }    
    }
    return 0;
}
