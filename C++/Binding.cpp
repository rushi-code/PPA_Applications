#include<iostream>

using namespace std;

class Demo
{
    public:
        void Fun()
        {
            cout<<"Inside Fun\n";
        }

        void Gun()
        {
            cout<<"Inside Gun\n";
        }
};

int main()
{
    Demo obj;

    cout<<"Inside Main\n";

    cout<<"Size of obj "<<sizeof(obj)<<"\n";

    obj.Fun();
    obj.Gun();

    return 0;
}