#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;

        Base()
        {
            A = 11;
            B = 21;
            C = 31;
            cout<<"Inside Base Constructor\n";
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside Fun of Base\n";
        }
};

class Derived : public Base
{
    public:
       
        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            cout<<A<<"\n";
            //cout<<B<<"\n";
            cout<<C<<"\n";
        
            
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

        void Gun()
        {
            cout<<"Inside Gun of Derived\n";
        } 
        
};

class PPA : public Derived
{
    public:

        PPA()
        {
            cout<<"Inside PPA constructor"<<"\n";
            cout<<A<<"\n";
            //cout<<B<<"\n";
            cout<<C<<"\n";
            
        }
        ~PPA()
        {
            cout<<"Inside PPA destructor"<<"\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of PPA"<<"\n";
        }  
            
};

int main()
{  
    cout<<"Inside main"<<"\n";

    PPA pobj;
    
    cout<<"End of main"<<"\n";
    
    return 0;
}