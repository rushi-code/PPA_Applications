#include<stdio.h>
static int z = 15;

void Demo()
{
    static int No = 10;
    No++;

    printf("%d\n",No);
}

int main()
{
    Demo();
    Demo();
    Demo();
    Demo();
    Demo();
    Demo();
    Demo();
    Demo();
    Demo();

    return 0;
}