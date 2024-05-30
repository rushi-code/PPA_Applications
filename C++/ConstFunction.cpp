#include<iostream>
using namespace std;

class Demo

{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11),D(21)
        {
            A = 0;
            B = 0;
        }

        Demo(int i, int j, int k, int l): C(k),D(l)
        {
            A = i;
            B = j;
        }

        void Fun()
        {
            A++;
            B++;
            cout<<A<<"\n";
            cout<<B<<"\n";
        }

        void Gun() const
        {
            // A++;
            // B++;
            // C++;
            // D++;
        }
};

int main()
{
    Demo obj1(11,21,51,101); 
    const Demo obj2(11,21,51,101);

    cout<<obj1.A<<"\n";
    cout<<obj1.B<<"\n";
    cout<<obj1.C<<"\n";
    cout<<obj1.D<<"\n";

    obj1.Fun();
    obj1.Gun();

    obj2.Gun();
    //obj2.Fun();

    return 0;
}