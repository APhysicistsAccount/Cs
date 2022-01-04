#include<stdio.h>



main()
{
 int fahr, cels, lower, upper, step;


 lower=0;
 upper=1000;
 step=5;
cels=lower;
printf("Celcius\tFhrenhite\n");
 while(cels<=upper)
 {
     fahr=(9/5)*cels+32;
     printf("%4d\t%4d\n",cels,fahr);
     cels=cels+step;
 }


}
