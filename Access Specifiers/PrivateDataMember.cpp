#include<iostream>
using namespace std;

class Student
{
    private:
        string name;
        int roll;

    public:
        void details()
        {
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Roll No. : "<<roll<<endl;
        }

        void setName(string name)
        {
            this->name = name;
        }

        void setRoll(int roll)
        {
            this->roll = roll;
        }

        string getName()
        {
            return name;
        }

        int getRoll()
        {
            return roll;
        }
};

int main()
{
    Student s1;
    s1.setName("shabd");
    s1.setRoll(01);
    cout<<"\n"<<s1.getName()<<"\t"<<s1.getRoll()<<endl;
    s1.details();
    return 0;
}
