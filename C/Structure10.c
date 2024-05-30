#include<stdio.h>

struct Demo
{
    int i;
    struct Demo *ptr;
};

int main() 
{
    struct Demo obj;

    obj.i = 11;
    obj.ptr = NULL;

    return 0;
}