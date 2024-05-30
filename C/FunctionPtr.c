#include<stdio.h>

int Multiplication(int No1, int No2)
{
    int Result = 0;

    Result = No1 * No2;

    return Result;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;

    int iAns = 0;

    printf("Enter First Number\n");
    scanf("%d",&iNo1);

    printf("Enter Second Number\n");
    scanf("%d",&iNo2);

    int(*ptr)(int, int);

    ptr = Multiplication;

    iAns = ptr(iNo1,iNo2);

    printf("Ans is %d\n",iAns);


    return 0;
}