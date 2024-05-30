#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            A = 11;
            B = 21;
            cout<<"Inside Demo Constructor\n";
        }

        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Fun of Demo\n";
        }
};

class Hello : public Demo
{
    public:
        int X,Y;

        Hello()
        {
            X = 51;
            Y = 101;
            cout<<"Inside Hello Constructor\n";
        }

        ~Hello()
        {
            cout<<"Inside Hello Destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Gun of Hello\n";
        }      
};

int main()
{  
    Hello hobj; 

    hobj.Fun();
    hobj.Gun();

    cout<<"Size of hobj : "<<sizeof(hobj)<<"\n";

    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";

    return 0;
}