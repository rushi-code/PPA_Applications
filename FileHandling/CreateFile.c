#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;

    printf("Enter File name that you want to create : \n");
    scanf("%s",Name);   //Name of array is internally consider as base address so no & operator

    FD = creat(Name,0777);

    if(FD == -1)
    {
        printf("Unable to create file\n");
    }

    else
    {
        printf("File is successfully created\n");
    }

    return 0;
}