#include<stdio.h>

int main()
{
    int No = 11;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****a = &r;
    int *****b = &a;
    int ******c = &b;


    printf("%d\n",sizeof(No));
    printf("%d\n",**q);

    return 0;
}