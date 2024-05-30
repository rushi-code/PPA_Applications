#include<stdio.h>

int main()
{
    int Arr[6] = {10,20,30};

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);
    printf("%d\n",Arr[5]);


    int Brr[6];

    Brr[0] = 10;
    Brr[1] = 20;

    printf("%d\n",Brr[0]);
    printf("%d\n",Brr[1]);
    printf("%d\n",Brr[2]);//garbage
    printf("%d\n",Brr[3]);//garbage
    printf("%d\n",Brr[4]);//garbage
    printf("%d\n",Brr[5]);//garbage

    return 0;
}