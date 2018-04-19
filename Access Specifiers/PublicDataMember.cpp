#include<iostream>
using namespace std;

class Student
{
    public:
        string name;
        int roll;

        void details()
        {
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Roll No. : "<<roll<<endl;
        }
};

int main()
{
    Student s1;
    s1.name = "shabd";
    s1.roll = 01;
    s1.details();
    return 0;
}
