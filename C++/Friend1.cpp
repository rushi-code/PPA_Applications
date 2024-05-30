#include<iostream>
using namespace std;

class Hello
{
    public:
        void Gun();
};

class Marvellous
{
    public:
        void Sun();
        void Run();
}; 

class Demo
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;

    public:
        Demo (int i, int j, int k)
        {
            A = i;
            B = j;
            C = k;
        }

    friend void Fun();
    friend void Hello::Gun();
    friend class Marvellous;
};

void Fun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";    
}

void Hello :: Gun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";    
}

void Marvellous :: Run()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";    
}

void Marvellous :: Sun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";    
}

int main()
{
    Fun();

    Hello hobj;
    hobj.Gun();

    Marvellous mobj;
    mobj.Run();
    mobj.Sun();

    return 0;
}