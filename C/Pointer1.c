#include<stdio.h>

int main()
{
    int No = 11;
    int *iptr = &No;

    char ch = 'A';
    char *cptr = &ch;

    double d = 25.963;
    double *dptr = &d;

    printf("%d\n",No);
    printf("%c\n",ch);
    printf("%f\n",d);

    printf("%d\n",&No);
    printf("%d\n",&ch);
    printf("%d\n",&d);

    printf("%d\n",&iptr);
    printf("%d\n",&cptr);
    printf("%d\n",&dptr);

    printf("%d\n",*iptr);
    printf("%c\n",*cptr);
    printf("%f\n",*dptr);

    printf("%d\n",sizeof(iptr));
    printf("%d\n",sizeof(cptr));
    printf("%d\n",sizeof(dptr));

    printf("%d\n",sizeof(*iptr));  
    printf("%d\n",sizeof(*cptr));   
    printf("%d\n",sizeof(*dptr));  

    return 0;
}