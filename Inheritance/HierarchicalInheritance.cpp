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

class Bus : public Vehicle
{
    public :
        Bus()
        {
            cout<<"This is a Bus."<<endl;
        }
};

int main()
{
    Car c;
    Bus b;
    return 0;
}
