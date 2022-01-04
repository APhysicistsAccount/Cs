#include<stdio.h>

main()
{
    int fahr;
    for(fahr=0;fahr<=1000;fahr=fahr+10)
    {
        printf("%d\t%d\n", fahr, (5*(fahr-32))/9);
    }
}