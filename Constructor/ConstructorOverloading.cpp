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
        name = "Shabd";
        roll = 13;
        marks = 99;
    }

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    Student(string name)
    {
        this->name = name;
        roll = 0;
        marks = 0;
    }
};

int main()
{
    Student s1;
    Student s2("Raj", 2, 85);
    Student s3("Aman");
    cout<<s1.name<<"\t"<<s1.roll<<"\t"<<s1.marks<<endl;
    cout<<s2.name<<"\t"<<s2.roll<<"\t"<<s2.marks<<endl;
    cout<<s3.name<<"\t"<<s3.roll<<"\t"<<s3.marks<<endl;
    return 0;
}
