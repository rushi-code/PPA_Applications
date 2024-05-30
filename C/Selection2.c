#include<stdio.h>

int main()
{
    int Std = 0;

    printf("Enter Your Standard\n");
    scanf("%d",&Std);


    switch (Std)
    {
        case 1: 
            printf("Exam is at 1 PM\n");
            break;

        case 2: 
            printf("Exam is at 2 PM\n");
            break;

        case 3: 
            printf("Exam is at 3 PM\n");
            break;

        case 4: 
            printf("Exam is at 4 PM\n");
            break;
        
        default:
            printf("Invalid Standard\n");

    }
    return 0;
}