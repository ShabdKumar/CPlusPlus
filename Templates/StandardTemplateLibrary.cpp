#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int i = 0;

    cout<<"Vector initial size : "<<vec.size()<<endl;

    for(i=0; i<5; i++)
        vec.push_back(i);

    cout<<"Vector final size : "<<vec.size()<<endl;

    for(i=0; i<5; i++)
        cout<<"Value of vec["<<i<<"] : "<<vec[i]<<endl;

    vector<int> :: iterator v = vec.begin();

    while(v != vec.end())
    {
        cout<<"Value of vec["<<i<<"] : "<<*v<<endl;
        v++;
    }

    return 0;
}
