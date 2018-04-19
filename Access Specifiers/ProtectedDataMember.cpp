#include<iostream>
using namespace std;

class Parent
{
    protected:
        long salary;
};

class Child : public Parent
{
    public:
        void setSalary(long salary)
        {
            this->salary = salary;
        }

        long getSalary()
        {
            return salary;
        }

        void displaySalary()
        {
            cout<<"\nSalry : "<<salary<<endl;
        }
};

int main()
{
    Child ch;
    ch.setSalary(10000);
    cout<<"\n"<<ch.getSalary()<<endl;
    ch.displaySalary();
    return 0;
}
