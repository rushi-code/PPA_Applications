#include<iostream>

using namespace std;

class Demo
{
    public:
        int Addition(int No1, int No2)
        {
            cout<<"Addition of two integers\n";
            return No1 + No2;
        }

        int Addition(int No1, int No2, int No3)
        {
            cout<<"Addition of three integers\n";
            return No1 + No2 + No3;
        }

        float Addition(float No1, float No2)
        {
            cout<<"Addition of two floats\n";
            return No1 + No2;
        }

        double Addition(double No1, double No2)
        {
            cout<<"Addition of two doubles\n";
            return No1 + No2;
        }
};

int main()
{
    Demo obj;

    int iRet = obj.Addition(1,11);
    cout<<"Addition is "<<iRet<<"\n";

    float fRet = obj.Addition(88.5f,2.0f);
    cout<<"Addition is "<<fRet<<"\n";

    double dRet = obj.Addition(9.056,45.366);
    cout<<"Addition is "<<dRet<<"\n";

    return 0;
}