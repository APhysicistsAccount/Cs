#include<stdio.h>

main()
{
    int c;
    // c=getchar();
    int i=-1;
    while(c!=EOF)
    {  
        // putchar(c);
        // printf("%c",c);
        c=getchar();
        i=i+1;
    }
    printf("%d",i);
}