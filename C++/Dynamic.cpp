//#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int Arr[5]; //Static Memory Allocation

    int *p = NULL;

    p = (int*)malloc(sizeof(int)* 5);

    int *X = NULL;

    X = new int[5];

    free(p);
    
    delete[]X;

    return 0;
}