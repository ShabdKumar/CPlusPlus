#include<iostream>
using namespace std;

double getAverage(int *, int);

int main()
{
    int array1[5] = {10,20,30,40,50};

    cout<<"\nAverage of the Array is : "<<getAverage(array1, 5)<<endl;

    return 0;
}

double getAverage(int *arr, int s)
{
    int sum = 0;
    for(int i=0; i<s; i++)
    {
        sum = sum + arr[i];
    }

    return double(sum)/s;
}
