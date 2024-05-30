#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter Number\n");
    scanf("%d",&No);

    if((No % 2) == 0)
    {
        printf("%d is even number\n",No);
    }
    else
    {
        printf("%d is odd number\n",No);
    }

    return 0;
}