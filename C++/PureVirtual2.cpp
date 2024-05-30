#include<iostream>
using namespace std;

class Base
{
    public:
        void DisplayRules()
        {
            cout<<"You have to submit Aadhar Card and PAN Card\n";
            cout<<"Minimum balance is 10,000\n";
        }

        virtual float CalculateROI() = 0;

};
class Derived : public Base
{
    public:
        float CalculateROI()
        {
            return 5.7f;
        }
        
};

int main()
{
    Derived*bp = new Derived();

    float fRet = 0.0f;

    fRet = bp->CalculateROI();
    cout<<"ROI is "<<fRet<<"\n";

    bp->DisplayRules();
    
    return 0;
}

