#include<iostream>

using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo()  //Default COnstructor
        {
            cout<<"Inside Default Constructor\n";
            No1 = 0;
            No2 = 0;
        }

        Demo(int A, int B)  //Parametrised Constructor
        {
            cout<<"Inside Parametrised Constructor\n";
            No1 = A;
            No2 = B;
        }

        Demo(Demo &ref) //Copy Constructor
        {
            cout<<"Inside Copy Constructor\n";
            No1 = ref.No1;
            No2 = ref.No2;
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }

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
    cout<<"Inside Main\n";

    Demo obj1;
    cout<<"Value of No1 from obj1 is : "<<obj1.No1<<"\n";
    cout<<"Value of No2 from obj1 is : "<<obj1.No2<<"\n";

    Demo obj2(101,211);
    cout<<"Value of No1 from obj2 is : "<<obj2.No1<<"\n";
    cout<<"Value of No2 from obj2 is : "<<obj2.No2<<"\n";

    Demo obj3(obj2);
    cout<<"Value of No1 from obj3 is : "<<obj3.No1<<"\n";
    cout<<"Value of No2 from obj3 is : "<<obj3.No2<<"\n";

    cout<<"End of Main\n";

    return 0;
}