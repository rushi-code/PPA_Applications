#include<iostream>
using namespace std;

int strlenX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    cout<<"Enter Your First Name : \n";
    cin>>Arr;

    iRet = strlenX(Arr);

    cout<<"Length of your name is : "<<iRet<<"\n";

   return 0;
} 