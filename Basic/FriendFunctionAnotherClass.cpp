#include<iostream>
using namespace std;

class A;

class B
{
    public :
        void show(A a);
};

class A
{
    private :
        int i = 10;

    friend void B :: show(A a);
};

void B :: show(A a)
{
    cout<<"i : "<<a.i<<endl;
}

int main()
{
    A a;
    B b;
    b.show(a);
    return 0;
}
