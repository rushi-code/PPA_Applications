#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD = 0;
   
    printf("Enter File name that you want to open : \n");
    scanf("%s",Name);   

    FD = open(Name,O_RDWR);

    if(FD == -1)
    {
        printf("Unable to open file\n");
    }

    else
    {
        printf("File is successfully open\n");
    }

    close(FD);

    return 0;
}