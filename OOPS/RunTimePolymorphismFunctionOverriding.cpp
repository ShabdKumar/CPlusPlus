#include<iostream>
using namespace std;

class Parent
{
    public :
        void eat()
        {
            cout<<"\nEating Meal"<<endl;
        }
        void drink()
        {
            cout<<"\nDrinking Beer"<<endl;
        }
};

class Child : public Parent
{
    public :
        void drink()
        {
            cout<<"\nDrinking Milk"<<endl;
        }
};

int main()
{
    Parent p;
    Child ch;
    p.eat();
    p.drink();
    ch.eat();
    ch.drink();
    return 0;
}
