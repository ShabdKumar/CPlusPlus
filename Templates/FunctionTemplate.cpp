#include<iostream>
using namespace std;

template <typename T>
inline T maxNum(T a, T b)
{
    return a<b?b:a;
}

int main()
{
    int num1 = 20;
    int num2 = 30;
    cout<<"\nMax Value is : "<<maxNum<int>(num1, num2)<<endl;

    double num3 = 20.2;
    double num4 = 10.1;
    cout<<"\nMax Value is : "<<maxNum<double>(num3, num4)<<endl;

    string s1 = "Hello";
    string s2 = "World";
    cout<<"\nMax Value is : "<<maxNum<string>(s1, s2)<<endl;

    return 0;
}
