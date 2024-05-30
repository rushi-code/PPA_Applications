#include<stdio.h>

struct Demo
{
    int i;
    float f;  
};

int main()
{
    struct Demo Arr[4];
    
    Arr[0].i = 11;
    Arr[0].f = 90.9;

    Arr[1].i = 12;
    Arr[1].f = 70.9;

    Arr[2].i = 31;
    Arr[2].f = 91.9;

    Arr[3].i = 41;
    Arr[3].f = 45.9;

    return 0;
}