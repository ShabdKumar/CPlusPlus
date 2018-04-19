#include<iostream>
using namespace std;

int main()
{
    int var[3] = {10,100,1000};
    int *ptr = NULL;
    int i = 0;

    cout<<"\nValue of Null pointer is : "<<ptr<<endl;

    for(ptr=var; ptr<(&var[3]); ptr++)
    {
        cout<<"Address and Values at "<<i+1<<"th position is "<<*ptr<<" "<<ptr<<endl;
        i++;
    }

    return 0;
}
