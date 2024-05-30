#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5]; //Static memory allocation

    int Size = 0;
    int *ptr = NULL;

    printf("Enter Size of Array\n");
    scanf("%d",&Size);

    ptr = (int *)malloc(sizeof(int) * Size); 

    free(ptr);

    return 0;
}