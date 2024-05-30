#include<stdio.h>

struct Demo
{
    int i;
    float f;  
};

struct Hello
{
    int no;
    int x;
    struct Demo dobj;
};

int main() 
{
    struct Hello hobj; //Allowed

    printf("%d\n",sizeof(hobj));

    return 0;
}