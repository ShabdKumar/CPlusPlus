#include<iostream>
using namespace std;

class Vehicle
{
    public :
        Vehicle()
        {
            cout<<"This is a Vehicle."<<endl;
        }
};

class Car : public Vehicle
{
    public :
        Car()
        {
            cout<<"This is a Car."<<endl;
        }
};

int main()
{
    Car c;
    return 0;
}
