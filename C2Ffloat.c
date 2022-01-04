#include<stdio.h>



main()
{
 float fahr, cels, step;
 int lower, upper;


 lower=0;
 upper=1000;
 step=5.65;
cels=lower;
printf("Celcius\tFhrenhite\n");
 while(cels<=upper)
 {
     fahr=(9/5)*cels+32;
     printf("%4.2f\t%4.2f\n",cels,fahr);
     cels=cels+step;
 }


}
