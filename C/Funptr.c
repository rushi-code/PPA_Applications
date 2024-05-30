#include<stdio.h>

int Addition(int A, int B)
{
    int iAns = 0;
    iAns = A + B;
    return iAns;
}
int main()
{
    int No1 = 10;
    int No2 = 20;
    int iRet = 0;

    int(*ptr)(int, int);

    ptr = Addition;
    iRet =  ptr(No1,No2);

    printf("Addition is %d\n",iRet);

    return 0;
}