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
    struct Demo obj1;
    struct Demo obj2;

    //Direct Accessing operator (.)
    obj1.i = 11;
    obj1.f = 31.255;
    obj1.j = 21;

    obj2.i = 74;
    obj2.f = 45.669;
    obj2.j = 45;

    printf("%d\n",sizeof(obj1));

    return 0;
}