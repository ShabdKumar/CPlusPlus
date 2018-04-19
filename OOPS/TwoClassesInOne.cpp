#include<iostream>
using namespace std;

class Name
{
    public:
        string name;
        Name(string name)
        {
            this->name = name;
        }
};

class Marks
{
    public:
        int mark;
        Marks(int mark)
        {
            this->mark = mark;
        }
};

int main()
{
    Name n1("shabd");
    Name n2("raj");
    Marks m1(99);
    Marks m2(85);

    cout<<n1.name<<" got "<<m1.mark<<endl;
    cout<<n2.name<<" got "<<m2.mark<<endl;

    return 0;
}
