#include<stdio.h>

union Demo
{
    int no;
    float f;
    double d;
};

int main()
{
    union Demo obj;

    printf("%d\n",sizeof(obj));

    obj.no = 11;
    printf("%d\n",obj.no);

    obj.f = 3.1421;
    printf("%f\n",obj.f);

    return 0;
}