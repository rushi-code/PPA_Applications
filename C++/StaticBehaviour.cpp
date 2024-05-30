#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;
        static int X,Y;

        Demo()
        {
            A = 0;
            B = 0;
        }
        void Fun()
        {
            cout<<"Inside Non static function Fun\n";
            cout<<"Value of A : "<<this->A<<"\n";
            cout<<"Value of B : "<<this->B<<"\n";

            cout<<"Value of A : "<<A<<"\n";
            cout<<"Value of B : "<<B<<"\n";

            cout<<"Value of X : "<<X<<"\n";
            cout<<"Value of Y :"<<Y<<"\n";
        }
        
        static void Gun()
        {
            cout<<"Inside Static Gun\n";
            cout<<"Value of X "<<X<<"\n";
            cout<<"Value of Y "<<Y<<"\n";   
        }
};

int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{   
    Demo :: Gun();
    Demo obj;

    obj.Fun();
    //obj.Gun()
    return 0;
}