//Function Pointer

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iResult = 0;

    iResult = iNo1 + iNo2;

    return iResult;
}

int main()
{
    int No1 = 10;
    int No2 = 11;
    int Ans = 0;

    int(*ptr) (int, int);   //Function pointer

    ptr = Addition;

    Ans = ptr(No1,No2);

    printf("Addition is %d\n",Ans);

    return 0;
}