#include<iostream>
using namespace std;

int main()
{
    int var[3] = {10,100,1000};
    int *ptr = NULL;
    ptr = var;

    for(int i=0; i<3; i++)
    {
        cout<<"Address and Values at "<<i+1<<"th position is "<<*(ptr+i)<<"\t"<<(ptr+i)<<endl;
    }

    return 0;
}
