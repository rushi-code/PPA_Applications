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

        void Sun()
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

        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }

        void Sun()
        {
            cout<<"Inside Derived Sun\n";
        }
};

int main()
{
    cout<<"Size of Base "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived "<<sizeof(Derived)<<"\n";

    Base*bp = new Derived;
    
    bp->Fun();
    bp->Gun();
    bp->Sun();

    return 0;
}