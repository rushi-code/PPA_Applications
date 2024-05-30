#include<stdio.h>

struct Demo
{
    int i;
    float f;  

    struct Hello
    {
        int no;
        int x;
    }hobj1,hobj2;

}dobj;

int main() 
{
    dobj.i = 10;
    dobj.f = 20.32;

    dobj.hobj1.no = 11;
    dobj.hobj1.x = 21;

    dobj.hobj2.no = 41;
    dobj.hobj2.x = 51;

    printf("%d\n",sizeof(dobj));

    return 0;
}