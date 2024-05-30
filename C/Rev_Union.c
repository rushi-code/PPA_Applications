#include<stdio.h>

struct Hello
{
    int i;
    float f;
    double d;
};

union Demo
{
    int i;
    float f;
    double d;
};

union ID_Details
{
    int PAN_NO;
    int AADHAR_NO;
    int PASSPORT_NO;
};

int main()
{
    struct Hello hobj;
    union Demo dobj;

    printf("Size of structure is %d\n",sizeof(hobj));
    printf("Size of union is %d\n",sizeof(dobj));

    hobj.i = 11;
    hobj.f = 21.32;
    hobj.d = 846.2345764;

    dobj.i = 21;
    dobj.f = 21.25;

    printf("%d\n",dobj.i);
    printf("%d\n",dobj.f);
   
    return 0;
}