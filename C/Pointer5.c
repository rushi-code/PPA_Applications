#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.1421;
    double d = 9.865235;

    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL;

    vp = &ch;
    printf("%c\n",*(char*)vp);

    vp = &i;
    printf("%d\n",*(int*)vp);

    vp = &d;
    printf("%f\n",*(double*)vp);

    vp = &f;
    printf("%f\n",*(float*)vp);

    return 0;
}