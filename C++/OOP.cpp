#include<iostream>

using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        void Fun()
        {
            cout<<"Inside Fun\n";
        }
};
int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"Size of object is "<<sizeof(obj1)<<"\n";

    cout<<"Size of Demo is "<<sizeof(Demo)<<"\n";

    obj1.No1 = 10;
    obj1.No2 = 20;

    obj2.No1 = 30;
    obj2.No2 = 40;

    obj1.Fun();
    obj2.Fun();

    cout<<obj1.No1<<"\n";

    return 0;
}