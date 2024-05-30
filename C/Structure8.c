#include<stdio.h>

struct Demo
{
    int i;
    float f;  

    struct Hello
    {
        int no;
        int x;
    }hobj;

}dobj;

int main() 
{

    dobj.i = 10;
    dobj.f = 20.32;

    dobj.hobj.no = 11;
    dobj.hobj.x = 21;

    printf("%d\n",sizeof(dobj));

    return 0;
}