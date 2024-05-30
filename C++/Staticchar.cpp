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

};
//Initialization of Static Characteristics
int Demo :: X = 10;
int Demo :: Y = 20;

int main()
{
    cout<<"Value of X : "<<Demo::X<<"\n";
    cout<<"Value of Y : "<<Demo::Y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A from obj1 : "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 : "<<obj2.A<<"\n";

    obj1.A++;

    cout<<"Value of A from obj1 : "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 : "<<obj2.A<<"\n";

    cout<<"Value of B from obj1 : "<<obj2.B<<"\n";
    cout<<"Value of B from obj2 : "<<obj2.B<<"\n";

    cout<<"Value of X from obj1 : "<<obj1.X<<"\n";
    cout<<"Value of Y from obj1 : "<<obj1.Y<<"\n";


    cout<<"Size of Demo class object "<<sizeof(obj1)<<"\n";
    return 0;
}