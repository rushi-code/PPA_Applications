#include<iostream>
using namespace std;

class Arithmetic
{
    private:
        int No1;
        int No2;
    
    public:
        Arithmetic()
        {
            No1 = 0;
            No2 = 0;
        }

        Arithmetic(int A, int B)
        {
            No1 = A;
            No2 = B;
        }

        int Addition()
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

        int Subtraction()
        {
            int Ans = 0;
            Ans = No1 - No2;
            return Ans;
        }

        int Multplication()
        {
            int Ans = 0;
            Ans = No1 * No2;
            return Ans;
        }
        
        int Division()
        {
            int Ans = 0;
            Ans = No1 / No2;
            return Ans;
        }
};

int main()
{
    Arithmetic obj1(100,10);
    Arithmetic obj2;

    int Ret = 0;

    Ret = obj1.Addition();
    cout<<Ret<<"\n";

    Ret = obj1.Subtraction();
    cout<<Ret<<"\n";

    Ret = obj1.Multplication();
    cout<<Ret<<"\n";

    Ret = obj1.Division();
    cout<<Ret<<"\n";

    
    return 0;
}