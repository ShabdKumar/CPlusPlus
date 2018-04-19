#include<iostream>
using namespace std;

int main()
{
    int var = 100;
    int *ptr = NULL;
    int **ptrptr = NULL;

    ptr = &var;
    ptrptr = &ptr;

    cout<<"\nValue of Variable : \t\t\t\t"<<var<<endl;
    cout<<"Address of Variable : \t\t\t\t"<<ptr<<endl;
    cout<<"Value at Address through Pointer(ptr) : \t"<<*ptr<<endl;
    cout<<"Address of Pointer(ptr) : \t\t\t"<<&ptr<<endl;
    cout<<"Value of Variable through Pointer(ptrptr) : \t"<<**ptrptr<<endl;
    cout<<"Address Stored at Pointer(ptrptr) : \t\t"<<ptrptr<<endl;
    cout<<"Address of Pointer(ptrptr) : \t\t\t"<<&ptrptr<<endl;
    return 0;
}
