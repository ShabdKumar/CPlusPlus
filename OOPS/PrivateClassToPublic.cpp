#include<iostream>
using namespace std;

class Teacher
{
    public:
        string name;
        int roll;
};

class Student : private Teacher
{
   public:
    void setRollNumber(int roll)
    {
        this->roll = roll;
    }
    int getRollNumber()
    {
        return roll;
    }

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Student s;
    s.setRollNumber(1);
    s.setName("Shabd");
    cout<<s.getName()<<"\t"<<s.getRollNumber()<<endl;
    return 0;
}
