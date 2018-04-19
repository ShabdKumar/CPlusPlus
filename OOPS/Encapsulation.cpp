#include<iostream>
using namespace std;

class A
{
    private :
        int num;
    public :
        void setNum(int num)
        {
            this->num = num;
        }

        int getNum()
        {
            return num;
        }
};

int main()
{
    A a;
    a.setNum(30);
    cout<<"\nNum = "<<a.getNum()<<endl;
    return 0;
}
