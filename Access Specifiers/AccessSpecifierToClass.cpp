#include<iostream>
using namespace std;

class Base
{
    private : int x;
    protected : int y;
    public : int z;
};

class publicDerived : public Base
{
    //x cannot be accessible.
    //y is protected.
    //z is public.
};

class protectedDerived : protected Base
{
    //x cannot be accessible.
    //y is protrcted.
    //z is protected.
};

class privateDerived : private Base
{
    //x cannot be accessible.
    //y is private.
    //z is private.
};

int main()
{
    Base b;
    publicDerived pubD;
    protectedDerived proD;
    privateDerived priD;
    b.z = 10;
    pubD.z = 100;
    //Other Members cant accessible here.
    cout<<b.z<<"\t"<<pubD.z<<endl;
}
