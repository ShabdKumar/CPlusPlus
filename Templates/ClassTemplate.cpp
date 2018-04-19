#include<iostream>
using namespace std;

template<typename T>
class Array
{
    private :
        T *ptr;
        int length;
    public :
        void print();
        Array(T arr[], int s);
};

template<typename T>
Array<T> :: Array(T arr[], int s)
{
    ptr = new T[s];
    length = s;
    for(int i=0; i<s; i++)
        ptr[i] = arr[i];
}

template<typename T>
void Array<T> :: print()
{
    for(int i=0; i<length; i++)
        cout<<ptr[i]<<"\t";
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    Array<int> a(arr, 5);
    a.print();
    return 0;
}
