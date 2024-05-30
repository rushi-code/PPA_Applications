#include<stdio.h>

#pragma pack(1)
struct Hello
{
    int no;
    char ch1;
    char ch2;
    float f;
    int i;
};


int main()
{
    struct Hello hobj;
    
    printf("%d\n",sizeof(hobj));
    
    return 0;
}