#include<stdio.h>

void Fun()
{
    register int i = 11;
}

int main()
{
    register int j = 21;
    
    return 0;
}