#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int Arr[4];
};

int main()
{
    struct Demo obj;

    obj.i = 10;
    obj.f = 98.98;

    obj.Arr[0] = 11;
    obj.Arr[1] = 21;
    obj.Arr[2] = 51;
    obj.Arr[3] = 101;

    return 0;
}