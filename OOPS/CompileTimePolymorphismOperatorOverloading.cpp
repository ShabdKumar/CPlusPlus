#include<iostream>
using namespace std;

class Complex
{
    private :
        int real;
        int img;
    public :
        Complex(int real=0, int img=0)
        {
            this->real = real;
            this->img = img;
        }
        Complex operator + (Complex const &obj)
        {
            Complex res;
            res.real = real + obj.real;
            res.img = img + obj.img;
            return res;
        }
        void print()
        {
            cout<<"\n"<<real<<"+i"<<img<<endl;
        }
};

int main()
{
    Complex c1(10, 5);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
