#include<stdio.h>

int main()
{
    int i, c;
    i = 0;
    c=getchar();
    while (c!=EOF)
    {
        c=getchar();
        if(c=='\n')
        {
            i=i+1;
        }
    }
    printf("%d",i);
    return 0;
}
