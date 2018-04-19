#include<iostream>
using namespace std;
class Father
{
    public:
        int var1 = 20;
};

class Child:public Father
{
    public:
        int var2 = 30;
};

int main()
{
    Child ch;
    cout<<ch.var1<<endl;
    cout<<ch.var2<<endl;
    return 0;
}
