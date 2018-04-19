#include<iostream>
using namespace std;

int *getRandom();

int main()
{
    int *p;
    p = getRandom();

    for(int i=0; i<5; i++)
    {
        cout<<"(p+"<<i<<") : "<<*(p+i)<<endl;
    }
    return 0;
}

int *getRandom()
{
    static int r[5] = {1,2,3,4,5};
    return r;
}
