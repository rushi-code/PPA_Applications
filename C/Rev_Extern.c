#include<stdio.h>

int X = 11;

extern double d;
extern int Y; 

int main()
{
    printf("Value of X : %d\n",X);

    printf("Value of Y : %d\n",Y);

    printf("Value of d : %f\n",d);

    return 0;
}