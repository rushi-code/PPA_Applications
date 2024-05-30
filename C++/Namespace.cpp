#include<iostream>
//using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int A;
            int B;

            Demo(int i = 10, int j = 20)
            {
                A = i;
                B = j;
            }
    };
}

namespace Infosystems
{
    class Demo
    {
        public:
            int A;
    };
}

using namespace Marvellous;

int main()
{
    Demo obj1;

    Infosystems::Demo obj2;
    
    std::cout<<"Inside Main\n";

    return 0;
}