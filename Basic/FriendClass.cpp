#include<iostream>
using namespace std;

class A
{
    private :
        int i = 10;

    friend class B;
};

class B
{
    public :
        void show(A a)
        {
            cout<<"i = "<<a.i<<endl;
        }

        void print(A a)
        {
            cout<<"A::i = "<<a.i<<endl;
        }
};

int main()
{
    A a;
    B b;
    b.show(a);
    b.print(a);
    return 0;
}
