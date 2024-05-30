#include<stdio.h>

int main()
{
    int No1 = 10;
    int *iptr = &No1;

    float f = 3.14;
    float *fptr = &f;

    char ch = 'A';
    char *cptr = &ch;

    printf("No1 : %d\n",No1);
    printf("&No1 : %d\n",&No1);

    printf("iptr : %d\n",iptr);
    printf("*iptr : %d\n",*iptr);

    printf("%d\n",sizeof(iptr));

    return 0;
}