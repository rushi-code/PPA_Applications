#include<stdio.h>
#include"PPA.h"

int main()
{
    struct Demo obj;

    printf("Inside main function\n");
    printf("Rate of Interest is %f\n",ROI);
    printf("Fees of upcoming batch is %d\n",FEES);
    printf("Size of Demo structure is %d\n",sizeof(obj));

    return 0;
}





#define MACRO_NAME MACRO_VALUE

#define MAX 90
#define DOZEN 12
#define SHEKDA 100
#define PI 3.14