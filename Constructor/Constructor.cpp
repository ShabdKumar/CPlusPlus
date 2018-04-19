#include<iostream>
using namespace std;

class Student
{
   public:
    string name;
    int roll;
    int marks;

    Student()
    {
        name = "shabd";
        roll = 13;
        marks = 99;
    }
};

int main()
{
    Student s;
    cout<<s.name<<"\t"<<s.roll<<"\t"<<s.marks<<endl;
}
