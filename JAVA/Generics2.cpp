//Application for Generic programming

#include<iostream>
using namespace std;

template<class T>   //Template Header
T Addition(T i, T j)    //T - Template Argument
{
    T result;
    result = i + j;
    return result;
}

int main()
{
    int i;
    float f;
    double d;

    i = Addition(10,11);
    cout<<i<<"\n";

    f = Addition(10.5f,11.6f);
    cout<<f<<"\n";

    d = Addition(10.8,11.5);
    cout<<d<<"\n";

    return 0;
}