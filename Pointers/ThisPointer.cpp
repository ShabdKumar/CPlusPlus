#include<iostream>
using namespace std;

class A
{
    private :
        int x, y;

    public :
        A(int x, int y)
        {
            this->x = x;
            this->y = y;
        }

        A &setX(int x)
        {
            this->x = x;
            return *this;
        }

        A &setY(int y)
        {
            this->y = y;
            return *this;
        }

        void print()
        {
            cout<<"\nx = "<<x<<"\ny = "<<y<<endl;
        }
};

int main()
{
    A a1(4, 5);
    a1.print();
    a1.setX(10).setY(20);
    a1.print();
}
