#include<stdio.h>

int main()
{
    int No = 10;
    char ch = 'A';
    float f = 3.14;

    int *ip = &No;
    char *cp = &ch;
    float *fp = &f;

    void *vp = NULL;

    vp = &No;

    printf("%d\n",*(int *)vp);

    vp = &ch;

    printf("%c\n",*(char *)vp);


    return 0;
}