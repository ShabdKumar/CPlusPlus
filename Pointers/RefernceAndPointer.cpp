#include<iostream>
using namespace std;

int main()
{
    int num1 = 80, num2 = 20;
    int *ptr = &num1;
    int &refer = num2;

    //Pointer Variable
    cout<<*ptr<<endl;
    cout<<&num1<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    //reference Variable
    cout<<"\n"<<refer<<endl;
    cout<<num2<<endl;
    cout<<&num2<<endl;
    cout<<&refer<<endl;

    return 0;
}
