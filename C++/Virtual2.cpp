#include<iostream>

using namespace std;

class Base
{
    public:
        int A, B;
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }

        void Gun()
        {
            cout<<"Inside Base Gun\n";
        }

        virtual void Sun()
        {
            cout<<"Inside Base Sun\n";
        }
};

class Derived : public Base
{
    public:
        int X,Y;

        void Fun()
        {
            cout<<"Inside Derived Fun\n";
        }

        virtual void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }

        virtual void Run()
        {
            cout<<"Inside Derived Run\n";
        }
};



int main()
{
    cout<<"Size of Base "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived "<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;
    
    bp->Fun();
    bp->Gun();
    bp->Sun();
    //bp->Run();
    

    return 0;
}