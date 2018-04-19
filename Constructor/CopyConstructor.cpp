#include<iostream>
using namespace std;

class Line
{
    public:
        int getLength();
        Line(int len);              //simple constructor
        Line(const Line &obj);      //copy constructor
        ~Line();                    //destructor

    private:
        int *ptr;
};

Line :: Line(int len)
{
    cout<<"\nNormal Constructor allocating ptr"<<endl;
    //allocating memory for pointer
    ptr = new int;
    *ptr = len;
}

Line :: Line(const Line &obj)
{
    cout<<"Copy Constructor allocating ptr"<<endl;
    //allocating memory for pointer
    ptr = new int;
    *ptr = *obj.ptr;    //copy the value
}

Line :: ~Line()
{
    cout<<"Freeing Memory"<<endl;
    delete ptr;
}

int Line :: getLength()
{
    return *ptr;
}

void display(Line l1)
{
    cout<<"Length of Line : "<<l1.getLength()<<endl;
}

int main()
{
    Line line1(10);
    Line line2 = line1;     //Calling Copy Constructor
    display(line1);
    display(line2);
    return 0;
}
