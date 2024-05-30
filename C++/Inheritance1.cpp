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
        // void Fun()
        // {
        //     cout<<"Inside Fun of Hello\n";
        // }     
};

class PPA : public Hello
{
    public:
        int I,J;

        PPA()
        {
            I = 111;
            J = 121;
            cout<<"Inside PPA constructor"<<"\n";
        }
        ~PPA()
        {
            cout<<"Inside PPA destructor"<<"\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of PPA"<<"\n";
        }  
        // void Fun()
        // {
        //     cout<<"Inside Fun of PPA\n";
        // }            
};

int main()
{  
    cout<<"Inside main"<<"\n";

    cout<<"Size of Demo "<<sizeof(Demo)<<"\n";
    cout<<"Size of Hello "<<sizeof(Hello)<<"\n";
    cout<<"Size of PPA "<<sizeof(PPA)<<"\n";

    PPA pobj;

    pobj.Fun();
    pobj.Gun();
    pobj.Sun();

    cout<<pobj.A<<"\n";
    cout<<pobj.B<<"\n";
    cout<<pobj.X<<"\n";
    cout<<pobj.Y<<"\n";
    cout<<pobj.I<<"\n";
    cout<<pobj.J<<"\n";

    cout<<"End of main"<<"\n";
    
    return 0;
}