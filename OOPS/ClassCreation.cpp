#include<iostream>
using namespace std;
class Car
{

public:
    int speed;
    int weight;
    void brake(){
    }
    void slowDown(){
    }
};

int main()
{
    Car ford;
    ford.speed = 180;
    ford.weight = 450;
    cout<<ford.speed<<endl;
    cout<<ford.weight<<endl;
    return 0;
}
