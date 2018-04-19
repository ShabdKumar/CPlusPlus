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

class FourWheeler : public Vehicle
{
    public :
        FourWheeler()
        {
            cout<<"This is a Four Wheeler Vehicle."<<endl;
        }
};

class Car : public FourWheeler
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
