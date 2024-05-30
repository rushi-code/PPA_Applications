#include<stdio.h>

int Addition(int A, int B)
{
    int Ans = 0;

    Ans = A + B;

    return Ans;
}

int main()
{
    int No1 = 10;
    int No2 = 11;
    int Result = 0;

    Result = Addition(No1,No2);

    printf("Addition is %d\n",Result);
    
    return 0;
}