#include<iostream>
using namespace std;

inline long cube(int s)
{
    return s*s*s;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    cout<<"\n"<<cube(num)<<endl;
}
