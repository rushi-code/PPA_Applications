#include<stdio.h>

int OddSum(int iNumber)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt<=iNumber; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iAns = 0;

    printf("Enter A Number up to which summation required\n");
    scanf("%d",&iNo);

    iAns = OddSum(iNo);

    printf("Summation is %d\n",iAns);

    return 0;
}