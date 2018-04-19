#include<iostream>
using namespace std;

int main()
{
    int var = 20;
    int *ptr;
    ptr = &var;

    cout<<"\nValue of Variable : "<<var<<endl;
    cout<<"Address of Variable : "<<ptr<<endl;
    cout<<"Value at Address : "<<*ptr<<endl;
    cout<<"Address of Pointer : "<<&ptr<<endl;

    return 0;
}
