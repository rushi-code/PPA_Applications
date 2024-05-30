#include<stdio.h>

//Global Declaration of structure
struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj1 = {11,90.9,51};

    struct Demo *ptr = &obj1;

    obj1.i = 11;    //Direct member access

    ptr->j = 51;    //Indirect member access operator

    ptr->f = 9.9754;

    //Direct Accessing operator (.)
    obj1.i = 11;
    obj1.f = 31.255;
    obj1.j = 21;
    
    printf("%d\n",sizeof(obj1));

    printf("%d\n",obj1.i);

    printf("%d\n",ptr->i);
    printf("%f\n",ptr->f);
    printf("%d\n",ptr->j);


    return 0;
}