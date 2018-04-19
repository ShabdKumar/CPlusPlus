#include<iostream>
using namespace std;

class Polymorphism
{
    public:
        int add(int num1, int num2)
        {
            return num1+num2;
        }

        int add(int num1, int num2, int num3)
        {
            return num1+num2+num3;
        }
};

int main()
{
    Polymorphism poly;
    cout<<poly.add(30,40,50)<<endl;
    cout<<poly.add(10,20)<<endl;
    return 0;
}
